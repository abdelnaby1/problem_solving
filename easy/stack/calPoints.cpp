#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int calPoints(vector<string> &operations)
{
    stack<string> st;
    int points = 0;
    for (string str : operations)
    {
        if (str == "+")
        {
            int one = stoi(st.top());
            st.pop();
            int two = stoi(st.top());
            st.push(to_string(one));
            st.push(to_string(one + two));
        }
        else if (str == "D")
        {
            int score = stoi(st.top());
            score *= 2;
            st.push(to_string(score));
        }
        else if (str == "C")
        {
            st.pop();
        }
        else
        {
            st.push(str);
        }
    }
    while (!st.empty())
    {
        points += stoi(st.top());
        st.pop();
    }
    return points;
}
int main()
{
    vector<string> oper{"5", "2", "C", "D", "+"};
    cout << calPoints(oper);
}