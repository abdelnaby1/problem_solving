#include <vector>
#include <unordered_map>
#include <iostream>
using namespace std;
vector<int> arrayChange(vector<int> &nums, vector<vector<int>> &operations)
{
    unordered_map<int, int> map;
    for (int i = 0; i < nums.size(); i++)
    {
        map.insert({nums[i], i});
    }
    unordered_map<int, int>::iterator it;
    for (int i = 0; i < operations.size(); i++)
    {
        it = map.find(operations[i][0]);
        int index = map[it->first];
        nums[index] = operations[i][1];
        map.erase(it);
        map.insert({nums[index], index});
    }
    return nums;
}
int main()
{
    vector<int> nums = {1, 2, 4, 6};
    vector<vector<int>> operations = {{1, 3}, {4, 7}, {6, 1}};
    nums = arrayChange(nums, operations);
}