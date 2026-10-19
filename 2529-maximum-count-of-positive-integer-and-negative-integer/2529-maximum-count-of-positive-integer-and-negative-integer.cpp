class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int count=0;
        int low=0;
        int neg=-1;
        int pos=0;
        int n=nums.size();
        int high=n-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]>=0){
                high=mid-1;
            }
            else if(nums[mid]<0){
                low=mid+1;
                neg=mid;
            }
        }
        count=neg+1;
        for(int i=neg+1;i<nums.size();i++){
            if(nums[i]==0)
                count++;
            else 
                break;
        }
        return (max((n-count),neg+1));
    }
};