#define rep(i,a,b) for(int i=a;i<=b;i++)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int> mapu;

        rep(i,0,nums.size()-1){
            int diff = target - nums[i] ; 

            if(mapu.contains(diff))
                return {mapu[diff], i};

            mapu.insert(make_pair(nums[i], i));
        }

    }
};
