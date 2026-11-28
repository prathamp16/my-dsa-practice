class Solution {
public:
    int arrangeCoins(int n) {
        int ans=0;
        int low=1;
        int high=n;
        while(low<=high){
            int mid=low+(high-low)/2;
            long long total=(long long)mid*(mid+1)/2;
            if(total<=n){
                ans=mid;
                low=mid+1;
            }
            else
                high=mid-1;
        }
        return ans;
    }
};