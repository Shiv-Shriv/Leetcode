class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        if(nums.size() < 4)
        return {};

        int i;
        int j;
        int l;
        int r;
        vector<vector<int>> answer;
        long long sum;
        for(i=0; i<nums.size()-3; i++){
            if(i>0&&nums[i]==nums[i-1]) 
            continue;
            for(j=i+1; j<nums.size()-2; j++){
                if(j>i+1&&nums[j]==nums[j-1]) 
                continue;
                l = j+1;
                r = nums.size()-1;
                while(l<r){
                    sum = (long long) nums[i]+nums[j]+nums[l]+nums[r];
                    if(sum==target){
                        answer.push_back({nums[i], nums[j], nums[l], nums[r]});
                        l++;
                        r--;

                        while(l<r&&nums[l]==nums[l-1])
                        l++;
                        while(l<r&&nums[r]==nums[r+1]) 
                        r--;
                    }
                    else if(target<sum){
                        r--;
                    }
                    else{
                        l++;
                    }
                }
            }
        }

        return answer;
    }
};