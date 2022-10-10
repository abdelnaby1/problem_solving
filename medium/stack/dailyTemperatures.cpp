#include <stack>
#include <vector>
using namespace std;
vector<int> dailyTemperatures(vector<int> &temperatures)
{
    stack<int> st;
    vector<int> ans(temperatures.size());
    for (int i = 0; i < temperatures.size(); i++)
    {
        while (!st.empty() && temperatures[st.top()] < temperatures[i])
        {
            ans[st.top()] = i - st.top();
            st.pop();
        }
        st.push(i);
    }
