class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        long long i = 0;
        long long n = arr.size();
        if(arr[0]!=1){
            arr[0] = 1;
        }

        while(i<n-1){
            if(arr[i+1] - arr[i]>1){
                arr[i+1] = arr[i] + 1;
            }
            else{
                i++;
                continue;
            }
            i++;
        }
        return arr[n-1];

    }
};