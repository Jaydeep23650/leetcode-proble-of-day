#include <set>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    int numTilePossibilities(string tiles) {
        set<string> uniqueArrangements;
        vector<bool> used(tiles.size(), false);
        string currentArrangement;
        backtrack(tiles, used, currentArrangement, uniqueArrangements);
        return uniqueArrangements.size();
    }

private:
    void backtrack(const string& tiles, vector<bool>& used, string& currentArrangement, set<string>& uniqueArrangements) {
        if (!currentArrangement.empty()) {
            uniqueArrangements.insert(currentArrangement);
        }
        
        for (int i = 0; i < tiles.size(); ++i) {
            if (used[i]) continue; // Skip used tiles
            used[i] = true; // Mark the tile as used
            currentArrangement.push_back(tiles[i]); // Add the tile to the current arrangement
            
            backtrack(tiles, used, currentArrangement, uniqueArrangements); // Recur
            
            // Backtrack
            currentArrangement.pop_back(); // Remove the last tile
            used[i] = false; // Mark the tile as unused
        }
    }
};