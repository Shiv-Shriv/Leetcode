class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int count = 0;

        for(int i=0; i<nums.size(); i++){
            int targetcount = 0;
            for(int j=i; j<nums.size(); j++ ){
                if(nums[j]==target){
                    targetcount++;
                }

                if(2*targetcount > (j-i+1)){
                    count++;
                } 

            }
        }   
        return count;
    }
};