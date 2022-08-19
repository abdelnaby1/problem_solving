#include <iostream>
#include <vector>
#include <map>
#include <iterator>
#include <bits/stdc++.h>
using namespace std;
bool containsDuplicate(vector<int> &nums)
{
    map<int, int> myMap;
    for (int i = 0; i < nums.size(); i++)
    {
        myMap[nums[i]]++;
    }
    map<int, int>::iterator itr;
    for (itr = myMap.begin(); itr != myMap.end(); ++itr)
    {
        if (itr->second > 1)
        {
            return true;
        }
    }
    return false;
}
// another solution without extra memory space
bool containsDuplicate2(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    int i = 0;
    int j;
    while (i < nums.size() - 1)
    {
        j = i + 1;
        if (nums[i] == nums[j])
        {
            return true;
        }
        else if (nums[i] != nums[j])
        {
            i++;
        }
    }

    return false;
}

int main()
{
    vector<int> nums = {4, 3, 7, 8, 2, 1};
    cout << containsDuplicate2(nums) << endl;
    return 0;
}