class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> setu;

    for(int& num: nums){
        setu.insert(num);
    }

    return (nums.size() != setu.size());
    }
};