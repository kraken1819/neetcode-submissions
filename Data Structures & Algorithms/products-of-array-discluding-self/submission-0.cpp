#define rep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int n = nums.size();
        vector<int> prefix(n+1); 

        prefix[0] = 1; 
        rep(i,1,n){
            prefix[i] = prefix[i-1]*nums[i-1]; 
        }

        vector<int> suffix(n+1); 
        suffix[n] = 1; 
        drep(i,n-1,0){
            suffix[i] = suffix[i+1]*nums[i];
        }
        //

        rep(i,0,n) cout << prefix[i] << ", ";
        cout << "\n";
        
        drep(i,n,0) cout << suffix[i] << ", " ; 
        cout << "\n"; 

        //
        
        vector<int> ans(n); 

        rep(i,0,n-1){
            ans[i] = prefix[i] * suffix[i+1];
        }
        return ans;
        
    }
};
