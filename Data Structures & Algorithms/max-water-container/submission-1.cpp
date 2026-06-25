class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size(); 


        int i = 0 ; 
        int j = n-1; 

        int max_area = INT_MIN; 
        int cur_area;
        while(i < j){
            cur_area = (j-i) * min(heights[i], heights[j]); 
            max_area = max(max_area, cur_area);
            if(heights[i] <= heights[j])
                i++;
            else 
                j--;
        }

        return max_area;
    }
};
