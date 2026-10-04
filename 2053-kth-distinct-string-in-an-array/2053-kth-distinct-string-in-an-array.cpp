class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int> map;
        int count=0;
        for(int i=0;i<arr.size();i++){
            map[arr[i]]++;
        }
        vector<string> freq;
        for(int i=0;i<arr.size();i++){
        if(map[arr[i]]==1)
            freq.push_back(arr[i]);
        }
        if(freq.size()<k)
            return "";
    return freq[k-1];    
    }
};