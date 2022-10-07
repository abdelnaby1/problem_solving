#include <vector>
#include <queue>
#include <unordered_map>
using namespace std;
vector<int> topKFrequent(vector<int> &nums, int k)
{
    unordered_map<int, int> map;
    priority_queue<pair<int, int>> pq;
    ;
    vector<int> ans(k);
    for (int num : nums)
    {
        map[num]++;
    }
    unordered_map<int, int>::iterator itr;
    for (itr = map.begin(); itr != map.end(); itr++)
    {
        pq.push({itr->second, itr->first});
    }

    for (int i = 0; i < k; i++)
    {
        ans[i] = pq.top().second;
        pq.pop();
    }
    return ans;
}