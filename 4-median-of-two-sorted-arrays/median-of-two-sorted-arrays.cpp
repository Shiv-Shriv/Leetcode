class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>mergevec(nums1.size()+nums2.size());
        merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), mergevec.begin());
        double median;
        int n = mergevec.size();
        if(n%2==0){
            median = (mergevec[n/2 - 1]+mergevec[n/2])/2.0;
        }
        else{
            median = (mergevec[n/2]);
        }

        return median;
    }
};