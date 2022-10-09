#include <vector>
#include <unordered_map>
#include <iostream>
#include <algorithm>
using namespace std;
vector<int> smallerNumbersThanCurrent(vector<int> &nums)

{
    unordered_map<int, int> map;
    vector<int> ans(nums.size());
    for (int i = 0; i < nums.size(); i++)
    {
        map.insert({i, nums[i]});
    }
    unordered_map<int, int>::iterator itr;
    for (itr = map.begin(); itr != map.end(); itr++)
    {
        int count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (itr->second > nums[i] && itr->first != i)
            {
                count++;
            }
        }
        ans[itr->first] = count;
    }
    return ans;
    // vector<pair<int, int>> vect;
    // vector<int> ans;
    // for (int i = 0; i < nums.size(); i++)
    // {
    //     vect.push_back({nums[i], i});
    // }
    // sort(vect.begin(), vect.end(), greater<pair<int, int>>());
    // for (int i = 0; i < vect.size(); i++)
    // {
    //     ans[vect[i].second] = vect.size() - i - 1;
    // }
    // return ans;
}
int main()
{
    vector<int> nums = {8, 1, 2, 2, 3};
    vector<int> ans = smallerNumbersThanCurrent(nums);
    for (int n : ans)
    {
        cout << n << " ";
    }
}