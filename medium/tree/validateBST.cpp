#include <iostream>
#include <vector>
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
void helper(TreeNode *root, vector<int> &ans)
{
    if (root == NULL)
        return;
    helper(root->left, ans);
    ans.push_back(root->val);
    helper(root->right, ans);
}
bool isValidBST(TreeNode *root)
{
    vector<int> ans;
    helper(root, ans);
    for (int i = 0; i < ans.size() - 1; i++)
    {
        if (ans[i] >= ans[i + 1])
            return false;
    }
    return true;
}