class Solution {
public:
    int reverse(int x) {
        string s;
        s=to_string(x);
        if(x<0)
            ::reverse(s.begin()+1,s.end());
        else
            ::reverse(s.begin(),s.end());
        try{
            return stoi(s);
        }
        catch(...){
            return 0;
        }
    }
};