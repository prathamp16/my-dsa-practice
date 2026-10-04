class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int> map;
        int freq=0;
        for(int i=0;i<text.size();i++){
            map[text[i]]++;
        }
        if(map['b']>=1 && map['a']>=1 && map['n']>=1 && map['l']>=2 && map['o']>=2)
            freq= min({map['b'],map['a'],map['n'],map['o']/2,map['l']/2});
    return freq;
    }
};