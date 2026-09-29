class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rectangles) {
        unordered_map<double,int> map;
        long long ans=0;
        for(int i=0;i<rectangles.size();i++){
           double ratio=(double)rectangles[i][0]/rectangles[i][1];
           ans+=map[ratio];
           map[ratio]++;
        }
        return ans;
    }
};