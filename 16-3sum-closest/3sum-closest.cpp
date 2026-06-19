class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int i=0;
        int ans = nums[0] + nums[1] + nums[2];
        int l;
        int r;
        int sum;
        while(i<nums.size()){
            l=i+1;
            r=nums.size()-1;

            while(l<r){
                sum = nums[i]+nums[l]+nums[r];
                if(sum>target){
                    r--;
                }
                else if(sum<target){
                    l++;
                }
                else{
                    return sum;
                }
                
                if(abs(target - sum)<abs(target-ans)){
                    ans = sum;
                }
            }
            i++;
            
        }

        return ans;
    }
};