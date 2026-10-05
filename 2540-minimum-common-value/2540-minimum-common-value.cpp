class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> map1;
        unordered_map<int,int> map2;
        for(int i=0;i<nums1.size();i++){
            map1[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++){
            map2[nums2[i]]++;
        }
        for(int i=0;i<nums1.size();i++){
            if(map1[nums1[i]]>0 && map2[nums1[i]])
                return nums1[i];
        }
        return -1;
    }
};
