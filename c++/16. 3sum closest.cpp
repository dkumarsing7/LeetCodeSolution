class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int result = 0;
        sort(nums.begin(), nums.end());
        long cs = INT_MAX;
        long total;
        for(int i=0; i<nums.size()-2; i++){
            if(i>0 && nums[i] == nums[i-1]) continue;
            int j = i+1;
            int k = nums.size()-1;
            while(j<k){
                total = nums[i] + nums[j] + nums[k];
                if(abs(total - target) < abs(cs-target)) cs = total;
                if(total < target) j++;else
                if(total > target) k--;
                else return total;
            }
        }return cs;
    }
};