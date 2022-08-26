#include <iostream>
#include <vector>
#include <map>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
void helper(TreeNode *root, map<int, int> &ans)
{
    if (root == NULL)
        return;
    helper(root->left, ans);
    ans[root->val]++;
    helper(root->right, ans);
}
vector<int> findMode(TreeNode *root)
{
    map<int, int> ans;
    helper(root, ans);
    vector<int> modes;
    int maxValue = 0;
    for (auto it = ans.cbegin(); it != ans.cend(); ++it)
    {
        if (it->second > maxValue)
        {
            modes.clear();
            maxValue = it->second;
            modes.push_back(it->first);
        }
        else if (it->second == maxValue)
        {
            modes.push_back(it->first);
        }
    }
    return modes;
}