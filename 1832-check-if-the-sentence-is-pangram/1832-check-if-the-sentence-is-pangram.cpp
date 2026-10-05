class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map<char,int> map;
        for(char c:sentence){
            map[c]++;
        }
        string word="abcdefghijklmnopqrstuvwxyz";
        for(char c:word){
            if(map[c]>=1)
                continue;
            else 
                return false;
        }
        return true;
    }
};