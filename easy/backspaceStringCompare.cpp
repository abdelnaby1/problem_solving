#include <iostream>
#include <stack>
using namespace std;
bool backspaceCompare(string s, string t)
{
    stack<char> s1;
    stack<char> s2;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != '#')
        {
            s1.push(s[i]);
        }
        else if (!s1.empty())
        {
            s1.pop();
        }
    }
    for (int i = 0; i < t.size(); i++)
    {
        if (t[i] != '#')
        {
            s2.push(t[i]);
        }
        else if (!s2.empty())
        {
            s2.pop();
        }
    }
    while (!s1.empty() && !s2.empty())
    {
        if (s1.top() != s2.top())
            return false;
        s1.pop();
        s2.pop();
    }
    if (s1.empty() && s2.empty())
        return true;
    else
        return false;
}