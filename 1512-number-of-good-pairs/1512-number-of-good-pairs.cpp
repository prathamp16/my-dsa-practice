class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int> map;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            ans+=map[nums[i]];
            map[nums[i]]++;
        }
        return ans;
    }
};