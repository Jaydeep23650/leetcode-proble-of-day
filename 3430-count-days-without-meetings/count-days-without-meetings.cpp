class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
               if (meetings.empty()) {
            return days; // All days are available
        }

        sort(meetings.begin(), meetings.end());
        
        int currentStart = meetings[0][0], currentEnd = meetings[0][1];
        int availableDays = 0, n = meetings.size();

        if (currentStart > 1 && days > currentStart) {
            availableDays += currentStart - 1;
        }

        for (int i = 1; i < n; i++) {
            if (days <= currentEnd) break;

            if (meetings[i][0] > currentEnd+1) {
                availableDays += meetings[i][0] -(1+ currentEnd);
                cout<< availableDays<<" ";
            }

            currentEnd = max(currentEnd, meetings[i][1]);
        }

        if (days > currentEnd) {
            availableDays += days - (currentEnd);
        }

        return availableDays;
    }
};
