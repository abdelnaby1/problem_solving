#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
vector<int> arrayRankTransform(vector<int> &arr)
{
    unordered_map<int, int> map;
    vector<int> ans(arr.size());
    vector<int> temp = arr;
    int rank = 1;
    sort(temp.begin(), temp.end());
    for (int i = 0; i < temp.size(); i++)
    {
        if (map.find(temp[i]) == map.end())
        {
            map[temp[i]] = rank++;
        }
    }
    for (int i = 0; i < arr.size(); i++)
    {
        ans[i] = map[arr[i]];
    }
    return ans;
}