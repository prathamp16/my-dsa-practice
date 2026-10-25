class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low=0;
        int n=nums.size();
        int high=n-1;
        int sol1=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                sol1=mid;
                high=mid-1;
            }
            else if(nums[mid]>target)
                high=mid-1;
            else 
                low=mid+1;
        }
        low=0;
        high=n-1;
        int sol2=-1;
         while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                sol2=mid;
                low=mid+1;
            }
            else if(nums[mid]>target)
                high=mid-1;
            else 
                low=mid+1;
        }
        return {sol1,sol2};
    }
};