#include <vector>
#include <unordered_set>
#include <iostream>
using namespace std;
bool findSubarrays(vector<int> &nums)
{
    unordered_set<int> sums;
    int windowSum = 0;
    for (int i = 0; i < 2; i++)
    {
        windowSum += nums[i];
    }
    sums.insert(windowSum);
    for (int i = 1; i < nums.size() - 2 + 1; i++)
    {
        windowSum = windowSum - nums[i - 1] + nums[i + 1];
        if (sums.find(windowSum) != sums.end())
        {
            return true;
        }
        sums.insert(windowSum);
    }

    return false;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};
    cout << findSubarrays(nums);
}