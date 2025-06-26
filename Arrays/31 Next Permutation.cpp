#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void nextPermutation(vector<int> &nums)
{
    int n = nums.size();
    int i = n - 2;

    while (i >= 0 && nums[i] >= nums[i + 1])
    {
        i--;
    }

    if (i >= 0)
    {
        int j = n - 1;
        while (j > i && nums[j] <= nums[i])
        {
            j--;
        }
        swap(nums[i], nums[j]);
    }

    reverse(nums.begin() + i + 1, nums.end());

    for (int ele : nums)
    {
        cout << ele << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> nums = {1, 2, 3};
    nextPermutation(nums); // Output: 1 3 2
    nums = {3, 2, 1};
    nextPermutation(nums); // Output: 1 2 3
    nums = {1, 1, 5};
    nextPermutation(nums); // Output: 1 5 1
    return 0;
}