#include <vector>
#include <iostream>
using namespace std;
bool isAnagram(string s, string t)
{
    vector<int> hash(26);
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i] - 97]++;
    }
    int j;
    for (j = 0; j < t.size(); j++)
    {
        hash[t[j] - 97]--;
        if (hash[t[j] - 97] < 0)
        {
            return false;
        }
    }
    for (auto n : hash)
    {
        if (n > 0)
            return false;
    }
    return true;
}