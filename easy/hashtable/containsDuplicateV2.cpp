#include <iostream>
#include <vector>
#include <vector>
#include <unordered_map>
using namespace std;
bool containsNearbyDuplicate(vector<int> &nums, int k)
{
    // int i = 0;
    // int j;
    // while (i < nums.size())
    // {
    //     j = i + 1;
    //     while (j < nums.size())
    //     {
    //         if (nums[i] == nums[j] && abs(i - j) <= k)
    //         {
    //             return true;
    //         }
    //         j++;
    //     }
    //     i++;
    // }
    // return false;
    int i = 0;
    unordered_map<int, int> map;
    while (i < nums.size())
    {
        if (map.find(nums[i]) != map.end())
        {
            if (abs(map[nums[i]] - i) <= k)
            {
                return true;
            }
            else
            {
                map[nums[i]] = i;
            }
        }
        else
        {
            map[nums[i]] = i;
        }
        i++;
    }
    return false;
}
int main()
{
    vector<int> nums = {1, 2, 3, 1, 2, 3};
    cout << containsNearbyDuplicate(nums, 2) << endl;
    return 0;
}