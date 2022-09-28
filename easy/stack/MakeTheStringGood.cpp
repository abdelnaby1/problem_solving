#include <iostream>
#include <stack>
using namespace std;

string makeGood(string s)
{
    stack<char> st;
    st.push(s[0]);
    int i = 1;
    while (i <= s.size() - 1)
    {
        if (!st.empty() && abs(s[i] - st.top()) == 32)
        {
            st.pop();
            i++;
        }
        else
        {
            st.push(s[i++]);
        }
    }
    i = st.size() - 1;
    s.resize(st.size());
    while (!st.empty())
    {
        s[i--] = st.top();
        st.pop();
    }
    return s;
}
int main()
{
    string str = "abBAcC";
    cout << makeGood(str) << endl;
}