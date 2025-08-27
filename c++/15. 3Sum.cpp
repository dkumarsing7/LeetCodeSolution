class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        int total = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[0]>0) return result;
            if(i>0 && nums[i]==nums[i-1]) continue;
            int j = i+1;
            int k = nums.size()-1;
            while(j<k){
                total = nums[i] + nums[j] + nums[k];
                if(total<0) j++;else
                if(total>0) k--;
                else{
                    result.push_back({nums[i], nums[j++], nums[k]});
                    while(nums[j] == nums[j-1] && j<k) j++;
                }

            }

        }
        return result;
    }
};