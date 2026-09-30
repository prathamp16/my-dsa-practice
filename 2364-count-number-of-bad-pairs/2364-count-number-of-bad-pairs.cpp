class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        unordered_map<int,int> map;
        long long count=0;
        for(int i=0;i<nums.size();i++){
            count+=i-map[nums[i]-i];
            map[nums[i]-i]++;
        }
        return count;
    }
};