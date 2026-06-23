class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(), costs.end());
        int i;
        int answer = 0;
        for(i = 0; i<costs.size()&&coins>=costs[i]; i++){
            if(coins >= costs[i]){
            coins = coins - costs[i];
            answer++;
            }
            else{
                break;
            }
        }

        return answer;
    }
};