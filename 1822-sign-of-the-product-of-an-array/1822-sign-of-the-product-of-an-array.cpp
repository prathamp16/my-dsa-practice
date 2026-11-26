class Solution {
public:
    int signFunc(vector<int>& nums){
        int product=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)
                return 0;
            else if(nums[i]<0)
                product++;
        }
        if(product%2==0)
            return 1;
        else
            return -1;
    }
    int arraySign(vector<int>& nums) {
        return signFunc(nums);
    }
};