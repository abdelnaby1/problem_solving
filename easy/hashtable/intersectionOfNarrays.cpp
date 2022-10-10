#include <vector>
#include <map>
using namespace std;
vector<int> intersection(vector<vector<int>> &nums)
{
    map<int, int> map;
    int size = nums.size();
    vector<int> ans;
    for (auto arr : nums)
    {
        for (int num : arr)
        {
            map[num]++;
        }
    }
    for (auto itr = map.begin(); itr != map.end(); itr++)
    {
        if (itr->second == size)
        {
            ans.push_back(itr->first);
        }
    }
    // sort(ans.begin(),ans.end());
    return ans;
}