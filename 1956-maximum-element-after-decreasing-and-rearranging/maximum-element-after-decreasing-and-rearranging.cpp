class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int i = 0;
        int n = arr.size();

            arr[0] = 1;
        

        while(i<n-1){
            if(arr[i+1] > 1 + arr[i]){
                arr[i+1] = arr[i] + 1;
            }
            i++;
        }
        return arr[n-1];

    }
};