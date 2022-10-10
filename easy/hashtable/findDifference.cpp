#include <vector>
#include <unordered_map>
using namespace std;
vector<vector<int>> findDifference(vector<int> &nums1, vector<int> &nums2)
{
    vector<vector<int>> diff(2);
    unordered_map<int, bool> map1;
    unordered_map<int, bool> map2;
    for (int n : nums1)
    {
        map1[n] = true;
        ;
    }
    for (int n : nums2)
    {
        map2[n] = true;
    }

    for (int n : nums1)
    {
        if (map2.find(n) == map2.end() && map1[n] == true)
        {
            diff[0].push_back(n);
            map1[n] = false;
        }
    }
    for (int n : nums2)
    {
        if (map1.find(n) == map1.end() && map2[n] == true)
        {
            diff[1].push_back(n);
            map2[n] = false;
        }
    }
    return diff;
}