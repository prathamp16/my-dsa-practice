class Solution {
public:
    int titleToNumber(string columnTitle) {
        int result=0;
        for(char c: columnTitle)
        {
            int s=c-'A'+1;
            result=result*26+s;
        }
        return result;
    }
};