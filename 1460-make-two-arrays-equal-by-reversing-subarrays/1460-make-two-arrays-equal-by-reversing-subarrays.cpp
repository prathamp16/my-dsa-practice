class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        unordered_map<int,int> map1;
        unordered_map<int,int> map2;
        for(int i=0;i<target.size();i++){
            map1[target[i]]++;
        }
        for(int i=0;i<arr.size();i++){
            map2[arr[i]]++;
            if(map1==map2)
                return true;
        }
        return false;
    }
};