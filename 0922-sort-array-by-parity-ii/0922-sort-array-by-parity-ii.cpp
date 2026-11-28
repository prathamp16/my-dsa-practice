class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> odd;
        vector<int> even;
        vector<int> sum;
        int a=0;
        int b=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0)
                even.push_back(nums[i]);
            else
                odd.push_back(nums[i]);
        }
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                sum.push_back(even[a]);
                a++;
            }
            else{
                sum.push_back(odd[b]);
                b++;
            }
        }
        return sum;
    }
};