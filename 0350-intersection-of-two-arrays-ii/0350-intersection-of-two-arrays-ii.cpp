class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        map<int,int> map;
        if(nums1.size()>nums2.size()){
            for(int i=0;i<nums1.size();i++){
                map[nums1[i]]++;
            }
            for(int i=0;i<nums2.size();i++){
                if(map[nums2[i]]>0){
                    ans.push_back(nums2[i]);
                }
                map[nums2[i]]--;
            }
        }
        else if(nums1.size()<=nums2.size()){
            for(int i=0;i<nums2.size();i++){
                map[nums2[i]]++;
            }
            for(int i=0;i<nums1.size();i++){
                if(map[nums1[i]]>0){
                    ans.push_back(nums1[i]);
                }
                map[nums1[i]]--;
            }
        }
        return ans;
    }
};