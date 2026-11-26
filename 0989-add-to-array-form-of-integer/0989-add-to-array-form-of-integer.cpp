class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int n=num.size()-1;
        while(n>=0 || k>0){
            if(n>=0){
                k+=num[n];
                num[n]=k%10;
                k/=10;
                n--;
            }
            else{
                num.insert(num.begin(),k%10);
                k/=10;
            }
        }
        return num;
    }
};