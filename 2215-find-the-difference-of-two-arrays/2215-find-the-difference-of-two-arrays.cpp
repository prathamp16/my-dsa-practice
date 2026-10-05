class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> map1;
        unordered_map<int,int> map2;
        for(int i=0;i<nums1.size();i++){
            map1[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++){
            map2[nums2[i]]++;
        }
        vector<vector<int>> answer(2);
        for(int i=0;i<nums1.size();i++){
            if (map2[nums1[i]]==0){
                answer[0].push_back(nums1[i]);
                map2[nums1[i]]--;
            }
        }
        for(int i=0;i<nums2.size();i++){
            if (map1[nums2[i]]==0){
                answer[1].push_back(nums2[i]);
                map1[nums2[i]]--;
            }
        }
        return answer;
    }
};