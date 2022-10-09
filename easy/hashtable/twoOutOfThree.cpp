#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;
vector<int> twoOutOfThree(vector<int> &nums1, vector<int> &nums2, vector<int> &nums3)
{
    unordered_map<int, int> map;
    unordered_set<int> set1;
    vector<int> ans;
    for (int num : nums1)
    {
        if (set1.find(num) == set1.end())
        {
            set1.insert(num);
            map[num]++;
        }
    }
    set1.clear();
    for (int num : nums2)
    {
        if (set1.find(num) == set1.end())
        {
            set1.insert(num);
            map[num]++;
        }
    }
    set1.clear();
    for (int num : nums3)
    {
        if (set1.find(num) == set1.end())
        {
            set1.insert(num);
            map[num]++;
        }
    }
    for (auto &num : map)
    {
        if (num.second >= 2)
        {
            ans.push_back(num.first);
        }
    }
    return ans;
}