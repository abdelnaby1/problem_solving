#include <algorithm>
#include <vector>
using namespace std;
class Solution
{
public:
    static bool cmp(const pair<int, int> &a, const pair<int, int> &b)
    {
        if (a.first == b.first)
        {
            return a.second > b.second;
        }
        return a.first < b.first;
    }
    vector<int> frequencySort(vector<int> &nums)
    {
        unordered_map<int, int> map;
        vector<int> ans;
        vector<pair<int, int>> vect;
        for (int num : nums)
        {
            map[num]++;
        }
        for (int i = 0; i < nums.size(); i++)
        {
            vect.push_back({map[nums[i]], nums[i]});
        }
        sort(vect.begin(), vect.end(), cmp);
        for (int i = 0; i < vect.size(); i++)
        {
            ans.push_back(vect[i].second);
        }
        return ans;
    }
};