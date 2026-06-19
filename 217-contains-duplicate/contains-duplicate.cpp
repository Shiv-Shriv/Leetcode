class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int l=0;
        int r=1;
        int n = nums.size();
        while(r<n){
        if(nums[l]==nums[r]){
            return true;
        }
        else{
            l=r;
            r++;
        }
        }
        return false;
    }
};