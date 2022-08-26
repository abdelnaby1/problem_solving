#include <iostream>
#include <vector>
using namespace std;
int missingNumber(vector<int> &nums)
{
    int n = nums.size();
    vector<int> result(n + 1);
    int i;
    for (i = 0; i < nums.size(); i++)
    {
        result[nums[i]] = 1;
    }
    int missing;
    for (i = 0; i < result.size(); i++)
    {
        if (result[i] == 0)
        {
            missing = i;
        }
    }
    return missing;
}

int main()
{
    vector<int> nums = {9, 6, 4, 2, 3, 5, 7, 0, 1};
    cout << missingNumber(nums) << endl;
    return 0;
}