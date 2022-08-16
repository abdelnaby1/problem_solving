#include "iostream";
using namespace std;
int lengthOfLastWord(string s)
{
    int i;
    int j;
    for (i = s.size() - 1; s[i] != 0 && s[i] == ' '; i--)
    {
    }

    j = i;
    while (s[j] != ' ' && j > 0)
    {
        j--;
    }
    if (s[j] == ' ')
    {
        return i - j;
    }

    return i - j + 1;
}
