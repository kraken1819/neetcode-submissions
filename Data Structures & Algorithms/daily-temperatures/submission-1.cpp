#define rep(i,a,b) for(int i=a; i<=b; i++)
#define drep(i,a,b) for(int i=a; i>=b; i--)

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        
        int n = temperatures.size(); 

        stack<pair<int, int>> future_highs; 

        vector<int> ans(n); 

        drep(i, n-1, 0){
            while(!future_highs.empty() && ( future_highs.top().first <= temperatures[i] )){
                future_highs.pop();
            }

            if(!future_highs.empty()){
                ans[i] = future_highs.top().second - i;
            }

            future_highs.push(make_pair(temperatures[i], i));
        }

        return ans;
    }
};
