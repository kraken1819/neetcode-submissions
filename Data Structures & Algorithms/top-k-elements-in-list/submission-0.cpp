#define drep(i,a,b) for(int i=a;i>=b;i--)
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int, int> num_freq; 

    vector<vector<int>> freq(nums.size() + 1);

    for(int& num: nums){
        num_freq[num]++;
    }

    for(auto& pairu: num_freq){
        freq[pairu.second].push_back(pairu.first);
    }

    vector<int> ans; 

    drep(i,nums.size(), 1){
        for(int num: freq[i]){
            if(ans.size() == k) break;
            ans.push_back(num);
        }
    }

    return ans;
    }
};
