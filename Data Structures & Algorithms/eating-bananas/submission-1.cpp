#define rep(i,a,b) for(int i=a; i<=b; i++)

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        
        int n = piles.size();

        int max_eating_rate = *max_element(piles.begin(), piles.end()); 
        int min_eating_rate = 1; 
        int mid ; 


        while(min_eating_rate <= max_eating_rate){
            mid = min_eating_rate + ( max_eating_rate - min_eating_rate ) / 2; 

            int time_taken = 0; 
            rep(i,0,n-1){
                time_taken += piles[i]/mid; 
                if(piles[i] % mid != 0) time_taken++; 
            }

            if(time_taken > h){
                min_eating_rate = mid + 1; 
            }else{
                max_eating_rate = mid - 1; 
            }
        }

        return min_eating_rate;
    }
};
