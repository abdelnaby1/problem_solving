#include <iostream>
#include <stack>
using namespace std;
char getOpp(char r)
{
    if (r == '}')
    {
        return '{';
    }
    else if (r == ')')
    {
        return '(';
    }
    else if (r == ']')
    {
        return '[';
    }
    return -1;
};
bool isValid(string s)
{
    stack<char> st;
    for (auto c : s)
    {
        if (c == '}' || c == ')' || c == ']')
        {
            if (st.empty())
            {
                return false;
            }
            if (getOpp(c) != st.top())
            {
                return false;
            }
            st.pop();
        }
        else
        {
            st.push(c);
        }
    }
    if (st.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}