#define rep(i,a,b) for(int i=a;i<=b;i++)
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
        return false;
    }
    int s_freq[26] = {};
    int t_freq[26] = {};

    for(char ch: s){
        s_freq[ch-'a']++;
    }
    for(char ch: t){
        t_freq[ch-'a']++;
    }

    bool are_equal = true;

    rep(i,0,25){
        if(s_freq[i] != t_freq[i]){
            are_equal = false;
            break;
        }
    }

    return are_equal;
    }
};
