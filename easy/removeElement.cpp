#include "iostream";
using namespace std;
#include "vector";

int removeElement(vector<int> &nums, int val)
{
    int i = 0;
    int j = 0;
    while (i < nums.size())
    {
        if (nums[i] != val)
        {
            nums[j] = nums[i];
            j++;
        }
        i++;
    }
    return j;
}

int main()
{
    vector<int> nums = {0, 1, 2, 2, 3, 0, 4, 2};
    cout << removeElement(nums, 2);
    cout << endl;
    return 0;
}