#include <vector>
#include <string>
#include <algorithm>
#include <iostream>

class Solution {
public:
    std::string getPermutation(int n, int k) {
        std::vector<int> v;
        for (int i = 1; i <= n; i++) {
            v.push_back(i);
        }

        // Decrement k to convert it to 0-based index
        k--;

        std::string result;
        while (n > 0) {
            // Calculate the factorial of (n-1)
            int fact = 1;
            for (int i = 1; i < n; i++) {
                fact *= i;
            }

            // Determine the index of the next number to add
            int index = k / fact;
            result += to_string(v[index]);
            v.erase(v.begin() + index); // Remove used number

            // Update k and n
            k %= fact;
            n--;
        }

        return result;
    }
};

