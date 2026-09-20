class Solution {
public:
    int reverseDegree(string s) {
       map<char,int> sol;
       string s1="abcdefghijklmnopqrstuvwxyz";
       int j=0;
       for(int i=0;i<=s1.size();i++)
       {
            sol[s1[i]]=26-j;
            j++;
       }
       int ans=0;
       for(int i=0;i<=s.size();i++)
       {
            ans=ans+(i+1)*sol[s[i]];
       }
       return ans;
    }
};