class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        long long vol=1LL*length*width*height;
        bool bulky=((length>=pow(10,4) || width>=pow(10,4) || height>=pow(10,4) || vol>=pow(10,9)));
        bool heavy=(mass>=100);
        if(bulky && heavy)
            return "Both";
        else if(bulky)
            return "Bulky";
        else if(heavy)
            return "Heavy";
        else
            return "Neither";
    }
};