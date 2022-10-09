#include <vector>
#include <queue>
#include <iostream>
using namespace std;
class Solution
{
private:
    typedef pair<int, int> pi;

public:
    vector<int> kWeakestRows(vector<vector<int>> &mat, int k)
    {
        priority_queue<pi, vector<pi>, greater<pi>> qu;
        vector<int> ans(k);
        for (int i = 0; i < mat.size(); i++)
        {
            int soldiers = 0;
            for (int j = 0; j < mat[i].size(); j++)
            {
                if (mat[i][j] == 1)
                {
                    soldiers++;
                }
            }
            qu.push(make_pair(soldiers, i));
        }
        for (int i = 0; i < k; i++)
        {
            pair<int, int> top = qu.top();
            ans[i] = top.second;
            qu.pop();
        }
        return ans;
    }
};
int main()
{
    vector<vector<int>> nums = {{1, 1, 0, 0, 0},
                                {1, 1, 1, 1, 0},
                                {1, 0, 0, 0, 0},
                                {1, 1, 0, 0, 0},
                                {1, 1, 1, 1, 1}};
    Solution sol;
    vector<int> ans = sol.kWeakestRows(nums, 3);
    for (int i : ans)
    {
        cout << i << " ";
    }
}