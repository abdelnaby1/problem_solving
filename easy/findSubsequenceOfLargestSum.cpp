#include <algorithm>
#include <vector>
using namespace std;
bool cmp(const pair<int, int> &a, const pair<int, int> &b)
{
    return a.second < b.second;
}
vector<int> maxSubsequence(vector<int> &nums, int k)
{
    //     priority_queue<pair<int,int>> pq;
    //     vector<pair<int,int>>res;
    //     vector<int>ans;
    //     for(int i=0;i<nums.size();i++){
    //         pq.push({nums[i],i});
    //     }
    //     for(int i=0;i<k;i++){
    //         res.push_back(pq.top());
    //         pq.pop();
    //     }
    //     sort(res.begin(),res.end(),cmp);
    //     for(int i=0;i<k;i++){
    //         ans.push_back(res[i].first);
    //     }
    //     return ans;
    vector<pair<int, int>> vect;
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++)
    {
        vect.push_back({nums[i], i});
    }
    sort(vect.rbegin(), vect.rend());
    sort(vect.begin(), vect.begin() + k, cmp);
    for (int i = 0; i < k; i++)
    {
        ans.push_back(vect[i].first);
    }
    return ans;
};