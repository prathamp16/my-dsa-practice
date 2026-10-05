class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string,int> map;
        stringstream ss1(s1);
        stringstream ss2(s2);
        string word;
        while(ss1>>word){
            map[word]++;
        }
        while(ss2>>word){
            map[word]++;
        }
        vector<string> answer;
        for(auto p:map){
            if(p.second==1)
                answer.push_back(p.first);
        }
        return answer;
    }
};