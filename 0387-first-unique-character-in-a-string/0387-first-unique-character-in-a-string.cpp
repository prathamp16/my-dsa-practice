class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int> sol;
        for(int i=0;i<s.size();i++)
        {
            sol[s[i]]++;
        }
        for(int i=0;i<s.size();i++){
            if(sol[s[i]]==1)
                return i;
        }
        return -1;
    }
};