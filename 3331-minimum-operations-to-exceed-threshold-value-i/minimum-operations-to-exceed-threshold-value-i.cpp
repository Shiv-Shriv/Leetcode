class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int lesscount = 0;
        int i;
        for( i=0; i<nums.size(); i++){
            if(nums[i]<k){
                lesscount++;
            }
        }
        return lesscount;
    }
};