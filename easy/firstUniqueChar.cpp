#include <vector>
#include <iostream>
using namespace std;
int firstUniqChar(string s)
{
    vector<int> hash(26);
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i] - 97]++;
    }

    int j;
    for (j = 0; j < s.size(); j++)
    {
        if (hash[s[j] - 97] == 1)
        {
            return j;
        }
    }

    return -1;
}