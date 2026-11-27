class Solution {
public:
    int sumOfMultiples(int n) {
        vector<int> ans;
        int count=0;
        for(int i=0;i<=n;i++){
            ans.push_back(i);
            if(ans[i]%3==0 || ans[i]%5==0 || ans[i]%7==0){
                count+=ans[i];
            }
        }
        return count;
    }
};