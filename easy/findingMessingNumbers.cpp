#include <iostream>;
#include <vector>;
#include <algorithm>>
using namespace std;
vector<int> findDisappearedNumbers(vector<int> &nums)
{

    int n = nums.size();
    vector<int> count(n + 1, 0);
    for (int i = 0; i < nums.size(); i++)
    {
        count[nums[i]]++;
    }
    int j = 0;
    for (int i = 1; i < count.size(); i++)
    {
        if (count[i] == 0)
        {
            count[j] = i;
            j++;
        }
    }
    count.resize(j);
    return count;
}
int main()
{
    // vector<int> nums = {4, 3, 2, 7, 8, 2, 3, 1};
    vector<int> nums = {1, 1, 1};
    vector<int> res = findDisappearedNumbers(nums);
    for (int num : res)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}