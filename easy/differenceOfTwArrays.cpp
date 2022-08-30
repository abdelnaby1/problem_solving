#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

vector<vector<int>> diff(vector<int> &nums1, vector<int> &nums2)
{
    vector<vector<int>> diff(2);
    unordered_map<int, int> myMap1;
    unordered_map<int, int> myMap2;

    // for all distinct integers in nums2
    for (int i = 0; i < nums1.size(); i++)
    {
        myMap1.insert({nums1[i], 1});
    }
    for (int i = 0; i < nums2.size(); i++)
    {
        auto it = myMap1.find(nums2[i]);
        if (it == myMap1.end())
        {
            diff[0].push_back(nums2[i]);
        }
    }
    // for all distinct integers in nums1
    for (int i = 0; i < nums1.size(); i++)
    {
        myMap2.insert({nums2[i], 1});
    }
    for (int i = 0; i < nums1.size(); i++)
    {
        auto it = myMap2.find(nums1[i]);
        if (it == myMap2.end())
        {
            diff[1].push_back(nums1[i]);
            myMap2.insert({nums1[i], 1});
        }
    }

    return diff;
}

int main()
{
    vector<int> nums1 = {1, 2, 3, 3};
    vector<int> nums2 = {1, 1, 2, 2};
    diff(nums1, nums2);

    return 0;
}