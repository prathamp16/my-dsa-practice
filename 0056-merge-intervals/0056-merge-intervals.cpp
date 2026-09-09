class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());

        vector<vector<int>> merged;

        for (auto& interval : intervals) {

            if (merged.empty() || interval[0] > merged.back()[1]) {

                merged.push_back(interval);

            } else {

                merged.back()[1] = max(merged.back()[1], interval[1]);

            }

        }

        return merged;
    }
};