class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int pivot = -1;
      for(int i = nums.size()-1; i > 0; i--){
    if(nums[i] > nums[i-1]){
        pivot = i-1;
        break;
    }
}

if(pivot == -1){
    reverse(nums.begin(), nums.end());
    return;
}



            int replace;

    for(int j = nums.size()-1; j > pivot; j--){
        if(nums[j] > nums[pivot]){
            replace = j;
            break;
    }
}
            swap(nums[replace], nums[pivot]);

            reverse(nums.begin() + pivot+1, nums.end());
       
    }
};