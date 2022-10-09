#include <vector>
#include <unordered_set>
using namespace std;
int arithmeticTriplets(vector<int> &nums, int diff)
{
    unordered_set<int> set;
    int count = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        set.insert(nums[i]);
    }
    for (int i = 0; i < nums.size(); i++)
    {
        if (set.find(nums[i] - diff) != set.end() && set.find(nums[i] + diff) != set.end())
            count++;
    }

    return count;
}
int main()
{
    vector<int> nums = {0, 1, 4, 6, 7, 10};
    int res = arithmeticTriplets(nums, 3);
}