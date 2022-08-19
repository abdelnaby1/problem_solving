#include <iostream>
#include <vector>
using namespace std;
int findMiddleIndex(vector<int> &nums)
{
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
    vector<int> nums = {2, 5};
    cout << findMiddleIndex(nums) << endl;
    return 0;
}