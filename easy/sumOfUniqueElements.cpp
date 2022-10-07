#include <unordered_map>
#include <iostream>
#include <vector>
using namespace std;
int sumOfUnique(vector<int> &nums)
{
    int sum = 0;
    unordered_map<int, int> map;
    for (int num : nums)
    {
        map[num]++;
    }
    unordered_map<int, int>::iterator itr;
    for (itr = map.begin(); itr != map.end(); itr++)
    {
        if (itr->second == 1)
        {
            sum += itr->first;
        }
    }
    return sum;
}