class Solution {
public:
    bool checkStrings(string s1, string s2) {
        int n = s1.size();
        map<char,int> od1, od2, ev1, ev2;

        for(int i = 0; i < n; i++){
            if(i % 2 == 0){
                ev1[s1[i]]++;
                ev2[s2[i]]++;
            } else {
                od1[s1[i]]++;
                od2[s2[i]]++; 
            }
        }

        return (ev1 == ev2 && od1 == od2);
    }
};