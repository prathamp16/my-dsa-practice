class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int low=0;
        int n=nums.size();
        int high=n-1;
        int first=-1;
        int last=-1;
        sort(nums.begin(),nums.end());
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                first=mid;
                high=mid-1;
            }
            else if(nums[mid]<target)
                low=mid+1;
            else
                high=mid-1;
        }
        if(first==-1)
            return {};
        low=0;
        high=n-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                last=mid;
                low=mid+1;
            }
            else if(nums[mid]<target)
                low=mid+1;
            else
                high=mid-1;
        }
        vector<int> ans;
        for(int i=first;i<=last;i++){
            ans.push_back(i);
        }
        return ans;
    }
};