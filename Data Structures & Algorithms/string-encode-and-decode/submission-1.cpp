class Solution {
public:

    string encode(vector<string>& strs) {
        string ans = ""; 

        for(string str: strs){
            int n = str.size(); 
            ans += to_string(n);
            ans += 'g'; 
            ans += str;
        }

        for(string str: strs) cout << str << " , " ;
        cout << "\n";
        cout << ans << "\n";
        return ans;
    }

    vector<string> decode(string s) {

        int i = 0 ; 
        int size = 0;
        vector<string> ans;
        while(i < s.size()){
            if(s[i] != 'g'){
                size = size * 10 + (s[i]-'0'); 
                i++;
                continue;
            }

            int start_index = i + 1;

            ans.push_back(s.substr(start_index,size));

            i = i + size + 1 ;
            size = 0; 

        }

        return ans;
    }
};
