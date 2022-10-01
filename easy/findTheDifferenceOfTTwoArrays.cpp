#include <vector>
#include <iostream>
#include <map>
using namespace std;
vector<vector<int>> findDifference(vector<int> &nums1, vector<int> &nums2)
{
    vector<vector<int>> diff(2);
    map<int, int> myMap1;

    for (int i = 0; i < nums1.size(); i++)
    {
        myMap1.insert({nums1[i], 1});
    }
    for (int i = 0; i < nums2.size(); i++)
    {
        auto it = myMap1.find(nums2[i]);
        if (it == myMap1.end())
        {
            myMap1.insert({nums1[i], 1});
        }
        else
        {
            it->second;
        }
    }
    map<int, int>::iterator itr;
    for (int i = 0; i < nums1.size(); i++)
    {
        itr = myMap1.find(nums2[i]);
        if (itr != myMap1.end() && itr->second > 1)
        {
            diff[0].push_back(nums1[i]);
        }
        itr++;
    }
    for (int i = 0; i < nums2.size(); i++)
    {
        itr = myMap1.find(nums2[i]);
        if (itr != myMap1.end() && itr->second > 1)
        {
            diff[0].push_back(nums1[i]);
        }
        itr++;
    }
    // diff.push_back
    return diff;
}

int main()
{
    vector<int> nums1 = {1, 2, 3};
    vector<int> nums2 = {2, 4, 6};
}