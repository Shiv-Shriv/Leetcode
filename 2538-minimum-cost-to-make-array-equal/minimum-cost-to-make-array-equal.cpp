class Solution {
public:
    long long minCost(vector<int>& nums, vector<int>& cost) {
        long long minimum = 0;
        int i;

        vector<vector<long long>> numcost;

        for(i=0; i<nums.size(); i++){
            numcost.push_back({nums[i], cost[i]});
        }

        sort(numcost.begin(), numcost.end());
        long long totalweight = 0;
        for(i=0; i<numcost.size(); i++){
            totalweight+=numcost[i][1];
        }
        long long curr = 0;
        long long median = 0;
        for(i=0; i<numcost.size(); i++){
            curr+=numcost[i][1];
            if(curr*2>=totalweight){
                median = numcost[i][0];
                break;
            }
        }

        for(i=0; i<numcost.size(); i++){
            minimum+= abs(numcost[i][0] - median)*(numcost[i][1]);
        }
        return minimum;
    }
};