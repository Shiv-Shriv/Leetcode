class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int j;
        vector<vector<int>> answer;
        for(int i=0; i<n; i++){
            j=i+2;
            if(abs(nums[j]-nums[i])<=k){
                answer.push_back({nums[i], nums[i+1], nums[j]});
            }
            else{
                return {};
            }
            i+=2;
        }
        return answer;
    }
};