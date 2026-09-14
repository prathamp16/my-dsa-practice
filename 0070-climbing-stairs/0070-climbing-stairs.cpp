class Solution {
public:
    int climbStairs(int n) {
        if(n<=2)
            return n;
        int left=1;
        int right=2;
        int ans;
        for(int i=3;i<=n;i++)
        {
            int ans=left+right;
            left=right;
            right=ans;
        }
        return right;
    }
};