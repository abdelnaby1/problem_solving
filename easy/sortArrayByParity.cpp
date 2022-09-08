#include <iostream>
#include <vector>
using namespace std;
vector<int> sortArrayByParity(vector<int> &nums)
{
    vector<int> ans(nums.size());
    int i = 0;
    int j = nums.size() - 1;
    int k = 0;
    while (i < nums.size())
    {
        if (nums[i] % 2 == 0)
        {
            ans[k] = nums[i];
            k++;
        }
        else
        {
            ans[j] = nums[i];
            j--;
        }
        i++;
    }
    return ans;
}
int main()
{

    vector<int> nums = {3, 1, 2, 4};
    vector<int> res = sortArrayByParity(nums);
    for (auto n : res)
    {
        cout << n << " ";
    }
}