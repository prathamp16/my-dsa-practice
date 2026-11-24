class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int ans;
        for(int i=0;i<nums.size();i++){
            ans=nums[(nums.size()-k)];
        }
        return ans;
    }
};