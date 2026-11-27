class Solution {
public:
    double average(vector<int>& salary) {
        double sum=0;
        int n=salary.size();
        long long min=*min_element(salary.begin(),salary.end());
        long long max=*max_element(salary.begin(),salary.end());
        for(int i=0;i<n;i++){
            sum+=salary[i];
        }
        sum=(sum-(max+min))/(n-2);
        return sum;
    }
};