class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cur=0;
        int mx = INT_MIN;
        for (int ele : nums){
            cur+=ele;
            mx = max(cur, mx);
            if(cur<0){
                cur = 0;
            }
        }
        return mx;
    }
};