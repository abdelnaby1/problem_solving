#include <vector>
#include <iostream>
using namespace std;
bool canConstruct(string ransomNote, string magazine)
{
    vector<int> hash(26);
    for (int i = 0; i < ransomNote.size(); i++)
    {
        hash[ransomNote[i] - 97]++;
    }
    int j;
    for (j = 0; j < magazine.size(); j++)
    {
        if (hash[magazine[j] - 97])
        {
            hash[magazine[j] - 97]--;
        }
    }
    for (auto n : hash)
    {
        if (n != 0)
            return false;
    }
    return true;
}