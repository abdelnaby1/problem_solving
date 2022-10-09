#include "iostream";
#include "vector";
#include <map>;
#include <iterator>
using namespace std;
vector<int> findDuplicates(vector<int> &nums)
{
    map<int, int> duplicates;
    vector<int> result;
    for (int i = 0; i < nums.size(); i++)
    {
        duplicates[nums[i]]++;
    }
    map<int, int>::iterator itr;
    for (itr = duplicates.begin(); itr != duplicates.end(); ++itr)
    {
        if (itr->second == 2)
        {
            result.push_back(itr->first);
        }
    }
    return result;
}
int main()
{
    // vector<int> nums = {4, 3, 2, 7, 8, 2, 3, 1};
    vector<int> nums = {1};
    nums = findDuplicates(nums);
    for (int num : nums)
    {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}