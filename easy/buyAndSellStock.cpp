#include <iostream>
#include <vector>
using namespace std;
int maxProfit(vector<int> &prices)
{
    int i = 0;
    int j = 1;
    int profit = 0;
    while (j < prices.size())
    {
        if (prices[i] < prices[j])
        {
            profit = max(profit, prices[j] - prices[i]);
        }
        else
        {
            i = j;
        }
        j++;
    }
    return profit;
}

int main()
{
    vector<int> prices = {7, 1, 5, 10, 3, 6, 4};
    cout << maxProfit(prices) << endl;
    return 0;
}