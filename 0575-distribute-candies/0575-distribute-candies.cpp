class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_map<int,int> map;
        for(int i=0;i<candyType.size();i++){
            map[candyType[i]]++;
        }
        return min((int)map.size(),(int)candyType.size()/2);
    }
};