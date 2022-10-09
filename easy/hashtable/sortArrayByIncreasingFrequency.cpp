#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
vector<int> frequencySort(vector<int> &nums)
{
    vector<int> ans(nums.size());
    unordered_map<int, int> hash_table;

    for (int i = 0; i < nums.size(); i++)
    {
        if (hash_table.find(nums[i]) != hash_table.end())
        {
            hash_table[nums[i]]++;
        }
        else
        {
            hash_table[nums[i]] = 1;
        }
    }
    unordered_map<int, int>::iterator itr;
    for (itr = hash_table.begin(); itr != hash_table.end(); itr++)
    {
        }
}
int main()
{
    vector<int> nums = {1, 1, 2, 2, 2, 3};
    frequencySort(nums);
    // vector<int> nums = frequencySort(nums);
    for (auto n : nums)
    {
        cout << n << " ";
    }
    cout << endl;
}