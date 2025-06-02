
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxSubstrings(string word) {
        int n = word.size();
        vector<pair<int, int>> intervals;
        for (int i = 0; i < n; ++i) {
            for (int j = i + 3; j < n; ++j) {
                if (word[i] == word[j]) {
                    intervals.push_back({i, j});
                }
            }
        }
        sort(intervals.begin(), intervals.end(), [](auto &a, auto &b) {
            return a.second < b.second;
        });
        int count = 0, last_end = -1;
        for (auto &interval : intervals) {
            if (interval.first > last_end) {
                ++count;
                last_end = interval.second;
            }
        }
        return count;
    }
};