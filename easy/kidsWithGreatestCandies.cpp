#include <vector>
#include <algorithm>
using namespace std;
vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
{
    int greatestNum = *max_element(candies.begin(), candies.end());
    vector<bool> ans(candies.size());
    for (int i = 0; i < candies.size(); i++)
    {
        if (candies[i] + extraCandies >= greatestNum)
        {
            ans[i] = true;
        }
        else
        {
            ans[i] = false;
        }
    }
    return ans;
}
