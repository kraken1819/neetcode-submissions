#define rep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
    vector<int> new_nums(nums);
    sort(nums.begin(), nums.end());

    int low = 0; 
    int high = nums.size()-1; 

    while(low < high){
        int cur_sum  = nums[low] + nums[high];

        if(cur_sum == target) break;
        else if(cur_sum > target) high--;
        else low++;
    }

    rep(i,0,n-1){
        if(new_nums[i] == nums[low]){
            low = i; 
            break;
        }
    }

    drep(i,n-1,0){
        if(new_nums[i] == nums[high]){
            high = i; 
            break;
        }
    }
    vector<int> ans;
    ans.push_back(low);
    ans.push_back(high);
    sort(ans.begin(), ans.end());
    return ans;
    }
};
