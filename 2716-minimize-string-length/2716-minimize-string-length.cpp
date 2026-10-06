class Solution {
public:
    int minimizedStringLength(string s) {
        unordered_map<char,int> map;
        int count=0;
        for(char c:s){
            map[c]++;
        if(map[c]==1)
            count++;
        }
    return count;
    }
};