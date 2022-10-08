#include <vector>
#include <unordered_map>
using namespace std;
int repeatedNTimes(vector<int> &nums)
{
    int repeated;
    unordered_map<int, int> map;
    for (int num : nums)
    {
        if (map[num] >= 1)
        {
            repeated = num;
            break;
        }
        map[num]++;
    }
    return repeated;
}
