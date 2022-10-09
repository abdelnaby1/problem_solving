#include <unordered_set>
#include <iostream>
using namespace std;
char repeatedCharacter(string s)
{
    unordered_set<char> set;
    char ch;
    for (char c : s)
    {
        if (set.find(c) != set.end())
        {
            ch = c;
            break;
        }
        set.insert(c);
    }
    return ch;
}
int main()
{
}