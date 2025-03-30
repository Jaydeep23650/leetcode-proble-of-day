class Solution {
public:
    vector<int> partitionLabels(string s) {
          // Step 1: Record the last occurrence of each character
        map<char, int> lastOccurrence;
        for (int i = 0; i < s.size(); i++) {
            lastOccurrence[s[i]] = i;
        }

        vector<int> result;
        int start = 0, end = 0;

        // Step 2: Iterate through the string to find partitions
        for (int i = 0; i < s.size(); i++) {
            end = max(end, lastOccurrence[s[i]]); // Update the end of the current partition
            if (i == end) { // If we reach the end of the partition
                result.push_back(end - start + 1); // Add the size of the partition
                start = i + 1; // Move to the next partition
            }
        }

        return result;
    }
};