class Solution {
public:
    int smallestChair(vector<vector<int>>& times, int targetFriend) {
        set<int> availSeats;
        int seatNumber = 0;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> occupSeats;
        int trgtFrndArrTime = times[targetFriend][0];
        
        sort(times.begin(), times.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[0] < b[0];
        });

        for (auto& timeEntry : times) {
            int arrTime = timeEntry[0], leavTime = timeEntry[1];
            
            while (!occupSeats.empty() && occupSeats.top().first <= arrTime) {
                auto seatEntry = occupSeats.top();
                occupSeats.pop();
                int vacSeatNum = seatEntry.second;
                availSeats.insert(vacSeatNum);
            }
            
            if (availSeats.empty()) {
                if (arrTime == trgtFrndArrTime) return seatNumber;
                occupSeats.emplace(leavTime, seatNumber++);
            } else {
                int firstSeatAv = *availSeats.begin();
                if (arrTime == trgtFrndArrTime) return firstSeatAv;
                occupSeats.emplace(leavTime, firstSeatAv);
                availSeats.erase(firstSeatAv);
            }
        }
        
        return -1;
    }
};