class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        map<int, int> frequency; 

        int n = nums.size(); 

        for(int i=0; i<n; i++){
            if(frequency.contains(nums[i])){
                frequency[nums[i]]++;
            }else {
                frequency[nums[i]] = 1; 
            }
        }

        map<int, vector<int>> freq_num_mapping; 

        priority_queue<int> pq;

        for(auto pairu: frequency){
            freq_num_mapping[pairu.second].push_back(pairu.first);
        }

        for(auto pairu: freq_num_mapping){
            pq.push(pairu.first);
        }
        //

        while(pq.empty()){
            cout << pq.top() << "\n";
            pq.pop();
        }
        for(auto pairu: freq_num_mapping){
            cout << pairu.first << ": ["; 
            for(int num: pairu.second){
                cout << num << " ";
            }
            cout << "]";
        }
        //

        vector<int> ans;

        while(k){
            int temp = pq.top();
            for(int val: freq_num_mapping[temp]){ 
                if(!k) break;
                ans.push_back(val);
                k--; 
            }
            pq.pop();
        }

        return ans;



    }
};
