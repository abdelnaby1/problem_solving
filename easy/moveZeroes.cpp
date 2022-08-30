#include <vector>
#include <iostream>
using namespace std;

void moveZeroes(vector<int> &nums)
{
    int j = 0;
    for (int i = 0; i < nums.size();)
    {
        if (nums[i] == 0)
        {
            i++;
        }
        else
        {
            swap(nums[j++], nums[i++]);
        }
    }
}
int main()
{
    vector<int> nums = {0, 1, 0, 3, 12};
    moveZeroes(nums);
    for (auto &&i : nums)
    {
        cout << i << " ";
    }

    return 0;
}