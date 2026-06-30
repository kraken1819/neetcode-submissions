#define rep(i,a,b) for(int i=a;i<=b;i++)

class Solution {
public:
    int trap(vector<int>& heights) {
        int prev_lvl = 0; 
        int cur_lvl;

        int tot_vol = 0; 

        int i = 0; 
        int j = heights.size() - 1; 

        while( i <= j ){ 
            cur_lvl = min(heights[i], heights[j]); 
            tot_vol += (cur_lvl - prev_lvl) * (j-i+1);
            cout << i << "," << j << " , " << cur_lvl << " | " << prev_lvl << " : " << tot_vol << "\n";

            prev_lvl = cur_lvl; 
            if(heights[i] <= heights[j]){
                //increment i to next highest one 
                int temp = heights[i]; 
                while(i <= j && heights[i] <= temp){
                    i++;
                }
            }else { 
                int temp = heights[j]; 
                while(i <= j && heights[j] <= temp){
                    j--;
                }
            }
        }


        rep(i,0,heights.size()-1)
            tot_vol -= heights[i];

        return tot_vol;
    }
};
