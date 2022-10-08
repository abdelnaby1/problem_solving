#include <vector>
#include <unordered_set>
using namespace std;
class Solution
{
public:
    int find(vector<int> &nums, int original)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            if (original == nums[i])
            {
                return original;
            }
        }
        return -1;
    }
    int findFinalValue(vector<int> &nums, int original)
    {
        unordered_set<int> set;
        for (int num : nums)
        {
            set.insert(num);
        }
        while (find(nums, original) != -1)
        {
            original = original * 2;
        }
        return original;
    }
};