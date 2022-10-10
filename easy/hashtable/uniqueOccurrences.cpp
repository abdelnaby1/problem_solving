#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;
bool uniqueOccurrences(vector<int> &arr)
{
    unordered_map<int, int> map;
    unordered_set<int> s;
    for (int n : arr)
    {
        map[n]++;
    }
    for (auto oc : map)
    {
        if (s.find(oc.second) != s.end())
        {
            return false;
        }
        s.insert(oc.second);
    }
    return true;
}