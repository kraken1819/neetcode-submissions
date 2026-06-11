#define rep(i,a,b) for(int i=a;i<=b;i++)
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size())
            return false; 

        int n = s.size();
        vector<int> hashu(26); 

        rep(i,0,n-1)
            hashu[s[i]-'a']++;

        rep(i,0,n-1)
            hashu[t[i]-'a']--;

        rep(i,0,25)
            if(hashu[i] != 0)
                return false; 
        
        return true;
        
    }
};
