#include <iostream>
#include <vector>
using namespace std;
vector<int> shuffle(vector<int> &nums, int n)
{
    vector<int> ans(nums.size());
    int i = 0;
    int j = 0;
    int r = n;
    int k = 0;
    while (k < 2 * n)
    {
        if (i < n)
        {
            ans[k++] = nums[i++];
            j = i;
            i = r;
        }
        else
        {
            ans[k++] = nums[i++];
            r = i;
            i = j;
        }
    }
    return ans;
}
int main()
{
    vector<int> nums = {2, 5, 1, 3, 4, 7};
    vector<int> ans;
    ans = shuffle(nums, 3);
    for (int n : ans)
    {
        cout << n << " ";
    }
}