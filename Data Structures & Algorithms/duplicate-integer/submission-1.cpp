class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> setu;

    for(int& num: nums){
        setu.insert(num);
    }

    return (nums.size() != setu.size());
    }
};