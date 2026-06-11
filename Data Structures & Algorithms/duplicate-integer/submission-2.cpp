class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> setu; 
        

        for(int i=0; i<nums.size(); i++){
            setu.insert(nums[i]);
            if((i + 1) != setu.size()) return true;
        }

        return false;
    }
};