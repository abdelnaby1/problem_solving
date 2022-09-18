#include <iostream>
#include <string.h>
using namespace std;
bool isVowel(char ch)
{
    ch = toupper(ch);
    return (ch == 'A' || ch == 'E' || ch == 'I' ||
            ch == 'O' || ch == 'U');
}
string reverseVowels(string s)
{
    int i = 0;
    int j = s.size() - 1;
    while (i < j)
    {
        if (isVowel(s[i]) && isVowel(s[j]))
        {
            swap(s[i], s[j]);
            i++;
            j--;
        }
        else if (isVowel(s[i]))
        {
            j--;
        }
        else if (isVowel(s[j]))
        {
            i++;
        }
        else
        {
            i++;
            j--;
        }
    }
    return s;
}