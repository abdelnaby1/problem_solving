#include <unordered_map>
#include <iostream>
#include <unordered_set>
using namespace std;
bool areOccurrencesEqual(string s)
{
    unordered_map<char, int> map;
    unordered_set<int> set;
    for (char c : s)
    {
        map[c]++;
    }
    unordered_map<char, int>::iterator itr;
    for (itr = map.begin(); itr != map.end(); itr++)
    {
        if (set.size() > 1)
            return false;
        set.insert(itr->second);
    }
    if (set.size() > 1)
        return false;
    return true;
}

int main()
{
    string s = "abacbc";
    cout << areOccurrencesEqual(s);
}