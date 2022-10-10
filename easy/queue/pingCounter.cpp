#include <queue>
using namespace std;
class RecentCounter
{
    queue<int> requests;
    // vector<int>ans(2);
public:
    RecentCounter()
    {
    }

    int ping(int t)
    {
        requests.push(t);
        while (requests.front() < t - 3000)
        {
            requests.pop();
        }
        return requests.size();
    }
};