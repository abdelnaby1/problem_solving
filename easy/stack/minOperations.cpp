#include <vector>
#include <stack>
#include <iostream>
using namespace std;
int minOperations(vector<string> &logs)
{
    stack<string> st;
    for (string operation : logs)
    {
        if (operation == "../")
        {
            if (!st.empty())
            {
                st.pop();
            }
        }
        else if (operation == "./")
        {
        }
        else
        {
            st.push(operation);
        }
    }
    return st.size();
}
int main()
{
    vector<string> logs{"d1/", "d2/", "../", "d21/", "./"};
    cout << minOperations(logs);
}