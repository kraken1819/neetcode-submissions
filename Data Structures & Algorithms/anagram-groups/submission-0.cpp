#define rep(i,a,b) for(int i=a;i<=b;i++)
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();

    map<string, vector<string>> mapu; 

    for(auto& str: strs){
        int str_freq[26] = {};
        for(char& ch: str){
            str_freq[ch-'a']++;
        }
        string key = "";
        rep(i,0,25){
            key += str_freq[i];
            key += ",";
        }
        if(mapu.find(key) != mapu.end()){
            mapu[key].push_back(str);
            continue;
        }
        
        vector<string> ans;
        ans.push_back(str);
        mapu[key] = ans;

    }

    vector<vector<string>> ans; 

    for(const auto& pair: mapu){
        ans.push_back(pair.second);
    }

    return ans;
    }
};
