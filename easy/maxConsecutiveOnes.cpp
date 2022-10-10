#include <iostream>
#include <vector>
using namespace std;
int findMaxConsecutiveOnes(vector<int> &nums)
{
    int max = -1;
    int i = 0;
    int j;
    int size = nums.size();
    while (i < size)
    {
        j = i;
        int count = 0;
        while (j < size && nums[i] == nums[j] && nums[i] == 1)
        {
            j++;
            count++;
        }
        if (count > max)
        {
            max = count;
        }
        i = j + 1;
    }
    return max;
}
int main()
{
    vector<int> nums{1, 1, 0, 1, 1, 1};
    cout << findMaxConsecutiveOnes(nums);
}