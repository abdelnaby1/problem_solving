#include <vector>
#include <queue>
using namespace std;
int thirdMax(vector<int> &nums)
{
    priority_queue<int> pq;
    for (int i = 0; i < nums.size(); i++)
    {
        pq.push(nums[i]);
    }
    int max = pq.top();
    int ele;
    int i = 0;
    while (!pq.empty() && i < 3)
    {
        if (ele == pq.top())
        {
            i--;
        }
        ele = pq.top();
        pq.pop();
        i++;
    }
    if (i >= 3)
        return ele;
    return max;
}