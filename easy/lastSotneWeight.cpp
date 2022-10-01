#include <vector>
#include <queue>
#include <iostream>
using namespace std;
int lastStoneWeight(vector<int> &stones)
{
    priority_queue<int> qu;
    for (int i = 0; i < stones.size(); i++)
    {
        qu.push(stones[i]);
    }
    while (!qu.empty())
    {
        int y = qu.top();
        qu.pop();
        if (qu.empty())
            return y;
        int x = qu.top();
        if (x == y)
        {
            qu.pop();
        }
        else
        {
            qu.pop();
            qu.push(y - x);
        }
    }
    return 0;
}
int main()
{
    vector<int> stones = {2, 2};
    cout << lastStoneWeight(stones);
}