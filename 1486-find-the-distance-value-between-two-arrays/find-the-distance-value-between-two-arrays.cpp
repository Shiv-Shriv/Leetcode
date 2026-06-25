class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int count = 0;
        sort(arr2.begin(), arr2.end());
    

        for(int i=0; i<arr1.size(); i++){
            bool found = true;
            int llimit = arr1[i] - d;
            int rlimit = arr1[i] + d;
                int l = 0;
                int r = arr2.size() - 1;
            while(l<=r){
                int mid = l + (r-l)/2;

                if(arr2[mid]>=llimit&&arr2[mid]<=rlimit){
                        found = false;
                        break;
                }
                else if(arr2[mid]<llimit){
                    l = mid + 1;
                }
                else if(arr2[mid]>rlimit){
                    r = mid - 1;
                }
            }
            if(found==true){
                count++;
            }
        }
        return count;
    }
};