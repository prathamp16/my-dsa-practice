class Solution {
public:
    int maximumCandies(vector<int>& nums, long long k) {
        int n=nums.size();
        int ans=0;
        int low=1;
        int high=*max_element(nums.begin(),nums.end());
        while(low<=high){
            int mid=low+(high-low)/2;
            long long count=0;
            for(int i=0;i<n;i++){
                count+=nums[i]/mid;
            }
            if(count>=k){
                ans=mid;
                low=mid+1;
            }
            else
                high=mid-1;
        }
        return ans;
    }
};