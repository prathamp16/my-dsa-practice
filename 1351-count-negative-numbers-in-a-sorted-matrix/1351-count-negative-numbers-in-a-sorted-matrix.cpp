class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int n=grid.size();
        int count=0;
        for(int i=0;i<n;i++){
            int low=0;
            int high=grid[i].size()-1;
            int index=-1;
            while(low<=high){
                int mid=low+(high-low)/2;
                if(grid[i][mid]>=0){
                    low=mid+1;
                }
                else{
                    index=mid;
                    high=mid-1;
                }
            }
            if(index==-1) continue;
            count+=grid[i].size()-index;
        }
        return count;
    }
};