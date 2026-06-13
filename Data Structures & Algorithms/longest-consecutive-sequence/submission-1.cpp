#define rep(i,a,b) for(int i=a;i<=b;i++)\

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        unordered_set<int> setu; 

        int max_ans = 0; 

        int count = 0; 

        int n = nums.size(); 

        rep(i,0,n-1) setu.insert(nums[i]); 

        rep(i,0,n-1){

            if(setu.contains(nums[i] - 1)) continue; 

            count = 1;
            int cur = nums[i]+1;  
            while(setu.contains(cur++)){
                count++;
            }
            max_ans = max(max_ans, count); 
        }

        return max_ans;
    }
};
