#include <vector>
using namespace std;
vector<int> targetIndices(vector<int> &nums, int target)
{
    vector<int> ans;
    // sort(nums.begin(),nums.end());
    // for(int i=0;i<nums.size();i++){
    //     if(nums[i] == target){
    //         ans.push_back(i);
    //     }
    // }
    int count = 0, lessthan = 0;
    for (int n : nums)
    {
        if (n == target)
            count++;
        if (n < target)
            lessthan++;
    }
    for (int i = 0; i < count; i++)
    {
        ans.push_back(lessthan++);
    }
    return ans;
}