#include <vector>
using namespace std;
vector<int> decompressRLElist(vector<int> &nums)
{
    vector<int> ans;
    int freqIndex = 0;
    int valIndex = 1;
    for (int i = 0; i < nums.size(); i += 2)
    {
        int freq = nums[freqIndex];
        int val = nums[valIndex];
        while (freq > 0)
        {
            ans.push_back(val);
            freq--;
        }
        freqIndex = valIndex + 1;
        valIndex = freqIndex + 1;
    }
    return ans;
}
