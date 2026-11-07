
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int> ans;

        for (int i = 1; ; i++) {
            int count = 0;
            for (int j = 0; j < arr.size(); j++) {
                if (i == arr[j]) {
                    count++;
                    break;
                }
            }
            if (count == 0)
                ans.push_back(i);
            if (ans.size() == k) 
                return ans[k - 1];
        }
    }
};
