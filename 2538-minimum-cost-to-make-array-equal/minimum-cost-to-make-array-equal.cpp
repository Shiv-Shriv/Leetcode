class Solution {
public:
    long long minCost(vector<int>& nums, vector<int>& cost) {
        long long minimum = 0;
        int i;
        int n = nums.size();

        vector<pair<long long, long long>> numcost;

        for(i=0; i<n; i++){
            numcost.push_back({nums[i], cost[i]});
        }

        sort(numcost.begin(), numcost.end());
        long long totalweight = 0;
        for(i=0; i<n; i++){
            totalweight+=numcost[i].second;
        }
        long long curr = 0;
        long long median = 0;
        for(i=0; i<n; i++){
            curr+=numcost[i].second;
            if(curr*2>=totalweight){
                median = numcost[i].first;
                break;
            }
        }

        for(i=0; i<n; i++){
            minimum+= abs(numcost[i].first - median)*(numcost[i].second);
        }
        return minimum;
    }
};