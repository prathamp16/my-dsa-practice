class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int> map1;
        unordered_map<char,int> map2;
        string a="aeiou";
        string b="bcdfghjklmnpqrstvwxyz";
        int y=0;
        int z=0;
        for(char c:s){
            if(a.find(c) != string::npos)
                map1[c]++;
            else
                map2[c]++;
        }
        for(auto x:map1){
            y=max(y,x.second);
        }
        for(auto x:map2){
            z=max(z,x.second);
        }
        return y+z;
    }
};