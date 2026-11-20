class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int count=0;
        int wealth=0;
        for(int i=0;i<accounts.size();i++){
            int count=0;
            for(int j=0;j<accounts[i].size();j++){
                count+=accounts[i][j];
            }
            wealth=max(count,wealth);
        }
        return wealth;
    }
};