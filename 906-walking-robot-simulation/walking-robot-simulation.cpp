class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        // base cases
        if(commands.empty()) return 0;

        int n = commands.size();
        
        // directions - north, east, south , west
        vector<pair<int, int>> directions = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
        // initially facing north
        int dir = 0;

        // store obstacles in set for faster check
        set<pair<int, int>> obsti;
        for(auto i : obstacles){
            obsti.insert({i[0], i[1]});
        }

        int x_cod = 0, y_cod = 0, maxDistance = 0;
        for(int cmd : commands){
            if(cmd == -2){
                // means left anticlock wise so to the previous direction in the direction array
                // +4 to ensure that when standing at index 0(north) dir changes to 3(west )
                dir = (dir - 1 + 4) % 4;
            }
            else if(cmd == -1){
                // means right , which is clockwise so next direction in the direction array
                dir = (dir + 1) % 4;
            }
            else{
                // move steps ahead
                for(int steps = 0; steps < cmd; steps++){
                    int new_x = x_cod + directions[dir].first;
                    int new_y = y_cod + directions[dir].second;

                    // check if there is obstacle at this new coordinate
                    if(obsti.count({new_x, new_y})){
                        // stop moving in that direction
                        break;
                    }

                    // update position
                    x_cod = new_x;
                    y_cod = new_y;

                    maxDistance = max(maxDistance, x_cod*x_cod + y_cod*y_cod);
                }
            }
        }

        return maxDistance;
    }
};