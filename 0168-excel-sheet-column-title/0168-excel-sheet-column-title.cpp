class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans="";
        while(columnNumber>0){
            columnNumber--;
            int col=columnNumber%26;
            ans+=char('A'+col);
            columnNumber/=26;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};