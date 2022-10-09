#include <iostream>
#include <map>
using namespace std;
bool isSubsequence(string s, string t)
{
    int i = 0;
    int j = 0;
    while (i < t.size())
    {
        if (t[i] == s[j])
        {
            j++;
        }
        i++;
    }
    if (j == s.size())
    {
        return true;
    }
    return false;
}
int main()
{
    string s = "aec";
    string t = "abcde";
    cout << isSubsequence(s, t) << endl;
    return 0;
}