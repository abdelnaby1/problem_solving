#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int numIdenticalPairs(vector<int> &nums)
{
    int good = 0;
    unordered_map<int, int> map;
    for (int i = 0; i < nums.size(); i++)
    {
        map.insert({i, nums[i]});
    }
    unordered_map<int, int>::iterator itr;
    for (itr = map.begin(); itr != map.end(); itr++)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            if (itr->second == nums[i] && itr->first < i)
            {
                good++;
            }
        }
    }
    return good;
}
int main()
{
    vector<int> nums = {1, 2, 3, 1, 1, 3};
    int ans = numIdenticalPairs(nums);
}