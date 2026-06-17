#define rep(i,a,b) for(int i=a; i<=b; i++)


class Solution {
public:
    static bool compareInfo(pair<int, int> a, pair<int, int> b ){
        return a.second > b.second;
    }

    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        
        int n = position.size(); 

        vector<pair<int, int>> info(n); 

        rep(i,0,n-1){ 
            info[i].first = speed[i]; 
            info[i].second = position[i];
        }

        sort(info.begin(), info.end(), compareInfo);

        vector<double> time_taken(n); 

        rep(i,0,n-1){
            time_taken[i] = (target - info[i].second) * (1.0) / info[i].first ;
        }

        stack<double> time_taken_fleet; 

        time_taken_fleet.push(time_taken[0]);

        rep(i,1,n-1){
            if(time_taken[i] <= time_taken_fleet.top())
                continue; 
            
            time_taken_fleet.push(time_taken[i]);
        }

        return time_taken_fleet.size();
    }
};
