class Solution {
public:
    int digitFrequencyScore(int n) {
        unordered_map<char,int> map;
        string s= to_string(n);
        int sum=0;
        for(char c:s){
            map[c]++;
        }
        for(auto x:map){
            sum+=(x.first -'0') * x.second;
        }
        return sum;
    }
};