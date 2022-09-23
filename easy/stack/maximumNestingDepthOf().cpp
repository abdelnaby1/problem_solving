#include <stack>
#include <iostream>
using namespace std;
int maxDepth(string s)
{
    stack<char> st;
    int max = 0;
    for (char c : s)
    {
        if (c == '(')
        {
            st.push(c);
        }
        else if (c == ')')
        {
            st.pop();
        }
        if (st.size() > max)
        {
            max = st.size();
        }
    }
    return max;
}