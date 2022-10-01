#include <vector>
#include <algorithm>
using namespace std;
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    if (b == 0)
        return a;

    if (a == b)
        return a;
    if (a > b)
        return gcd(a - b, b);
    return gcd(a, b - a);
}
int findGCD(vector<int> &nums)
{
    // sort(nums.begin(), nums.end());
    // return gcd(nums[0], nums[nums.size() - 1]);
    int min = nums[0];
    int max = nums[0];
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] < min)
            min = nums[i];
        else if (nums[i] > max)
            max = nums[i];
    }
    return gcd(max, min);
}