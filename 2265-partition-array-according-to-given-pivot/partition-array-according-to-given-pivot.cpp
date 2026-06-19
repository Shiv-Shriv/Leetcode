class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int ptr = 0;
        int i=0;
        int n = nums.size();
        vector<int>temp(n);
        
        while(ptr<n){
            if(nums[ptr]<pivot){
                temp[i]=nums[ptr];
                i++;
            
            }
            ptr++;
        }
        ptr = 0;
        while(ptr<n){
            
            if(nums[ptr]==pivot){
                temp[i]=nums[ptr];
                i++;
            }
            ptr++;
        }
        ptr = 0;

        while(ptr<n){
             if(nums[ptr]>pivot){
                temp[i]=nums[ptr];
                i++;
                
            }
            ptr++;
        }

        nums = temp;
        return nums;
    }

};