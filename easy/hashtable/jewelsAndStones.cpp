#include <iostream>
#include <unordered_set>
using namespace std;
int numJewelsInStones(string jewels, string stones)
{
    unordered_set<char> set;
    int count = 0;
    for (int i = 0; i < jewels.size(); i++)
    {
        set.insert(jewels[i]);
    }
    for (int i = 0; i < stones.size(); i++)
    {
        if (set.find(stones[i]) != set.end())
        {
            count++;
        }
    }

    return count;
}