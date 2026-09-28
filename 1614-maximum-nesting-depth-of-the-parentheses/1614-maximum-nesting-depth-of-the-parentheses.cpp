class Solution {
public:
    int maxDepth(string s) {
        int ans=0;
        int a1=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
                ans+=1;
            else if(s[i]==')')
                ans-=1;
            a1=max(a1,ans);
        }
        return a1;
    }
};