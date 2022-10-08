#include <vector>
#include <map>
using namespace std;
vector<vector<int>>
mergeSimilarItems(vector<vector<int>> &items1, vector<vector<int>> &items2)
{
    map<int, int> map;
    vector<vector<int>> ans;
    for (auto item : items1)
    {
        map[item[0]] += item[1];
    }
    for (auto item : items2)
    {
        map[item[0]] += item[1];
    }
    for (auto &item : map)
    {
        ans.push_back({item.first, item.second});
    }
    return ans;
}