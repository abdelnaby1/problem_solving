#include <vector>
using namespace std;
int dominantIndex(vector<int> &nums)
{
    int maxIndex = 0;
    int max = nums[0];
    for (int i = 1; i < nums.size(); i++)
    {
        if (max < nums[i])
        {
            max = nums[i];
            maxIndex = i;
        }
    }
    for (int i = 0; i < nums.size(); i++)
    {
        if (2 * nums[i] > max && i != maxIndex)
        {
            maxIndex = -1;
            break;
        }
    }
    return maxIndex;
}