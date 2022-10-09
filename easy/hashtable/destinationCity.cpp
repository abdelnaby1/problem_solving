#include <iostream>
#include <unordered_set>
#include <unordered_map>
#include <vector>
using namespace std;
string destCity(vector<vector<string>> &paths)
{
    unordered_map<string, string> map;
    unordered_set<string> set;
    string city;
    for (auto path : paths)
    {
        map[path[0]] = path[1];
        set.insert(path[0]);
        set.insert(path[1]);
    }
    // unordered_set<string>::itrerator itr;
    for (auto itr = set.begin(); itr != set.end(); ++itr)
    {
        if (map.find(*itr) == map.end())
        {
            city = *itr;
            break;
        }
    }
    return city;
}