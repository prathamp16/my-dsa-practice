class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int count=0;
        if(s1.size()!=s2.size())
            return false;
        map<char,int> a1;
        map<char,int> a2;
        for(int i=0;i<s1.size();i++){
            a1[s1[i]]++;
            a2[s2[i]]++;
        }
        if(a1==a2)
        {
            for(int i=0;i<s1.size();i++)
                if(s1[i]!=s2[i])
                    count++;
        if(count>2)
            return false;
        else 
            return true;
        }
        else
            return false;
    }
};