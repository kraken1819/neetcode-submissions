class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size(); 

        int i = 0 ; 
        int j = n-1 ; 

        int cur;
        while(i < j){
            cur = numbers[i] + numbers[j];
            
            if(cur == target){
                return {i+1, j+1};
            }else if(cur > target) { 
                j--; 
            }else{ 
                i++;
            }
        }

    }
};
