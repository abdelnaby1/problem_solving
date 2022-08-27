#include <iostream>
#include <vector>
using namespace std;
void rotate(vector<int> &nums, int k)
{
    vector<int> res;
    int i;
    int n = nums.size();
    int j = n - k % n;
    for (i = 0; i < nums.size(); i++)
    {

        res.push_back(nums[j % n]);
        j++;
    }

    nums = res;
}
int main()
{
    vector<int> nums = {-1, -100, 3, 99};
    rotate(nums, 3);
    for (auto num : nums)
    {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}