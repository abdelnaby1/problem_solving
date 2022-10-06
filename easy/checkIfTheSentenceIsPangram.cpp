#include <iostream>
#include <unordered_set>
using namespace std;
bool checkIfPangram(string sentence)
{
    unordered_set<char> set;
    for (char c : sentence)
    {
        set.insert(c);
    }
    if (set.size() == 26)
        return true;
    return false;
}