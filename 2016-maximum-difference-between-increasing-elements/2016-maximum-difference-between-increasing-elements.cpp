class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n=nums.size();
        int ans=INT_MIN;
        for(int i=0;i<n;i++){
            for(int j=n-1;j>i;j--){
                int diff=nums[j]-nums[i];
                ans=max(ans,diff);
            }
        }
        if(ans<=0)
            return -1;
        return ans;
    }
};