#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int minimumOperations(vector<int> &nums)
{
    // unordered_set<int> set;
    // for(auto it:nums) if(it!=0) set.insert(it);
    // return set.size();
    sort(nums.begin(), nums.end());
    int size = nums.size();
    int operations = 0;
    for (int i = 0; i < size; i++)
    {
        if (nums[i] > 0)
        {
            int min = nums[i];
            operations++;
            for (int j = 0; j < size; j++)
            {
                nums[j] = nums[j] - min;
            }
        }
    }
    return operations;
}
