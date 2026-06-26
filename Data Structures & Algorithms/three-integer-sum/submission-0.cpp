class Solution {
public:
    void inc_index(vector<int>& nums, int& index){
        int original = index; 
        int n = nums.size();
        while(index < n && nums[index] == nums[original])
            index++;
    }

    void dec_index(vector<int>& nums, int& index){
        int original = index; 
        while(index >= 0 && nums[index] == nums[original])
            index--;
    }
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        int n = nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());

        int i = 0; 
        while(i < n){

            int j = i+1; 
            int k = n-1; 

            int target = -1 * nums[i];
            while(j < k){
                if(nums[j] + nums[k] == target){
                    ans.push_back({nums[i], nums[j], nums[k]});
                    inc_index(nums, j);
                    dec_index(nums, k);
                }else if(nums[j] + nums[k] > target){
                    dec_index(nums, k);
                }else {
                    inc_index(nums, j);
                }
            }

            inc_index(nums, i);
        }

        return ans;
    }
};