class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> odd;
        vector<int> even;
        vector<int> ans;
        int a=0;
        int b=0;
        for(int i=0;i<nums.size();i++){
            if(i%2==0)
                even.push_back(nums[i]);
            else
                odd.push_back(nums[i]);
        }
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end());
        reverse(odd.begin(),odd.end());
        for(int i = 0; i < nums.size(); i++) {
            if(i % 2 == 0) {
                ans.push_back(even[a]);
                a++;
            }
            else {
                ans.push_back(odd[b]);
                b++;
            }
        }
        return ans;
    }
};