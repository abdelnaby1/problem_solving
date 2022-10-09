#include <iostream>
#include <unordered_set>
#include <unordered_map>
using namespace std;
int countPoints(string rings)
{
    unordered_map<char, unordered_set<char>> map;
    for (int i = 0; i < rings.size(); i++)
    {
        if (rings[i] >= 48 && rings[i] <= 57)
        {
            map[rings[i]].insert(rings[i - 1]);
        }
    }
    int count = 0;
    unordered_map<char, unordered_set<char>>::iterator itr;
    for (itr = map.begin(); itr != map.end(); itr++)
    {
        if (itr->second.size() == 3)
        {
            count++;
        }
    }
    return count;
}