class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int start = 0;
        int size = nums.size();
        for(int i=1; i<size; i++){
            if(nums[i] != nums[start]){
                nums[start+1] = nums[i];
                start++;
            }
        }
        return start + 1;
    }
};