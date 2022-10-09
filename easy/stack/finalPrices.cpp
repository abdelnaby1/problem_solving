#include <vector>
#include <stack>
using namespace std;
vector<int> finalPrices(vector<int> &prices)
{
    stack<int> st;
    vector<int> ans(prices.size());
    for (int i = 0; i < prices.size(); i++)
    {
        while (!st.empty() && prices[st.top()] >= prices[i])
        {
            prices[st.top()] = prices[st.top()] - prices[i];
            st.pop();
        }
        st.push(i);
    }

    return prices;
}
int main()
{
    vector<int> prices = {8, 4, 6, 2, 3};
    finalPrices(prices);
}