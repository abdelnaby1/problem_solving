#include <queue>
#include <vector>
using namespace std;
int maxProduct(vector<int> &nums)
{
    priority_queue<int> qu;
    for (int i = 0; i < nums.size(); i++)
    {
        qu.push(nums[i]);
    }
    int first = qu.top();
    qu.pop();
    int seconde = qu.top();
    return (first - 1) * (seconde - 1);
}