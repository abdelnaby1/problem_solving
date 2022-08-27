#include <iostream>
#include <vector>
#include <map>
using namespace std;
vector<int> twoSum(vector<int> &nums, int target)
{

    vector<int> result;
    map<int, int> myMap;
    for (int i = 0; i < nums.size(); i++)
    {
        if (myMap.find(nums[i]) != myMap.end())
        {
            result.push_back(i);
            result.push_back(myMap[nums[i]]);
            break;
        }
        else
        {
            myMap.insert({target - nums[i], i});
        }
    }
    return result;
}
int main()
{
    vector<int> nums = {3, 2, 4};
    vector<int> res = twoSum(nums, 6);
    for (auto num : res)
    {
        cout << num << " ";
    }
    return 0;
}