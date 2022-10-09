#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;
int countConsistentStrings(string allowed, vector<string> &words)
{
    unordered_set<char> set;
    int count = 0;
    for (char c : allowed)
    {
        set.insert(c);
    }
    for (string word : words)
    {
        bool flag = true;
        for (int i = 0; i < word.size(); i++)
        {
            if (set.find(word[i]) == set.end())
            {
                flag = false;
            }
        }
        if (flag)
            count++;
    }
    return count;
}