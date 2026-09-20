class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        unordered_map<char,int> sol;
        unordered_map<char,int> ans;
        for(char c:target)
        sol[c]++;
        for(char c:s)
        ans[c]++;
        int max=INT_MAX;
        for(char c:target)
        {
            int x= ans[c]/sol[c];
            max=min(x,max);
        } 
        return max;
    }

};