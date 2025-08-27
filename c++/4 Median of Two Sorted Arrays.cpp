class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        nums1.insert(nums1.end(), nums2.begin(), nums2.end());
        sort(nums1.begin(), nums1.end());
        int n = nums1.size();
        if(n%2==0){
            double median = (nums1[n/2] + nums1[n/2 - 1])/2.0;
            return median;
        }else{
            double median = (nums1[n/2]);
            return median;
        }
    }
};