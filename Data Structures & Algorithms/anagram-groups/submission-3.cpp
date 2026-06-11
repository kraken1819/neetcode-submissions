#define rep(i,a,b) for(int i=a;i<=b;i++)

class Solution {
public:
    string build_key(string& str){
        vector<int> hashu(26);

        for(char& ch: str)
            hashu[ch-'a']++;
        
        string ans = "";
        rep(i,0,25){
            ans += ('a' + i); 
            ans += to_string(hashu[i]);
        }
        return ans;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        map<string, vector<string>> mapu; 

        cout << "reached";
        for(string& str: strs){
            mapu[build_key(str)].push_back(str);
        }

        vector<vector<string>> ans;
        for(const auto& entry: mapu){
            ans.push_back(entry.second);
        }

        return ans;

    }
};
