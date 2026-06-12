#define rep(i,a,b) for(int i=a; i<=b; i++) 
class Solution {
public:
    bool isValid(string s) {
        stack<char> stacku; 

        bool ans = true; 
        int n = s.size(); 

        rep(i,0,n-1){
            char ch = s[i]; 

            if(ch == '[' || ch == '(' || ch == '{'){
                stacku.push(ch);
                continue;
            }

            if(stacku.empty()){
                ans = false; 
                break; 
            }
            char ch1 = stacku.top(); 

            string combined = string(1,ch1) + ch ; 

            if(!(combined == "()" || combined == "[]" || combined == "{}")){
                ans = false; 
                break; 
            }
            stacku.pop();
        }

        if(!stacku.empty()) ans = false; 

        return ans;
    }
};
