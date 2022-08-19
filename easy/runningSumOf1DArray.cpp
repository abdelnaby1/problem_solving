#include <iostream>
#include <vector>
using namespace std;
vector<int> runningSum(vector<int> &nums)
{
    vector<int> result;
    int sum = nums[0];
    result.push_back(sum);
    for (int i = 1; i < nums.size(); i++)
    {
        sum += nums[i];
        result.push_back(sum);
    }
    return result;
}
int main()
{
    vector<int> nums = {3, 1, 2, 10, 1};
    vector<int> res = runningSum(nums);
    for (auto num : res)
    {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}