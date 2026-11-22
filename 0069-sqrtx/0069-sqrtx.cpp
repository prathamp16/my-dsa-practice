class Solution {
public:
    int mySqrt(int x) {
        if(x<2)
            return x;
        int low=1;
        int high=x-1;
        long long ans=1;
        while(low<=high){
            long long mid=low+(high-low)/2;
            if(mid*mid==x)
                return mid;
            else if(mid*mid<x){
                ans=mid;
                low=mid+1;
            }
            else
                high=mid-1;
        }
        return ans;
    }
};