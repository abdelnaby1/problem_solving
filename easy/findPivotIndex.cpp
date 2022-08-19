#include <iostream>
#include <vector>
using namespace std;
int pivotIndex(vector<int> &nums)
{
    // int right_sum = 0, left_sum = 0;
    // if (nums.size() == 1 && nums[0] == 0)
    // {
    //     return 0;
    // }
    // for (int i = 1; i < nums.size(); i++)
    //     right_sum += nums[i];

    // for (int i = 0, j = 1; j < nums.size(); i++, j++)
    // {
    //     if (left_sum == right_sum)
    //         return i;
    //     right_sum -= nums[j];
    //     left_sum += nums[i];
    //     if (left_sum == right_sum)
    //         return i + 1;
    // }

    // return -1;

    // another way using extra memory
    int size = nums.size();
    vector<int> prefix(size);
    vector<int> suffix(size);
    prefix[0] = nums[0];
    for (int i = 1; i < nums.size(); i++)
    {
        prefix[i] = prefix[i - 1] + nums[i];
    }
    suffix[size - 1] = nums[size - 1];
    for (int j = size - 2; j >= 0; j--)
    {
        suffix[j] = suffix[j + 1] + nums[j];
    }
    for (int i = 0; i < size; i++)
    {
        if (prefix[i] == suffix[i])
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    vector<int> nums = {2, 1, -1};
    cout << pivotIndex(nums) << endl;
    return 0;
}