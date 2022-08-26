#include <iostream>
#include <queue>
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
vector<vector<int>> levelOrder(TreeNode *root)
{
    vector<vector<int>> result;
    if (root == nullptr)
    {
        return result;
    }
    queue<TreeNode *> qu;
    qu.push(root);
    while (!qu.empty())
    {
        vector<int> res;
        for (int i = qu.size(); i > 0; i--)
        {
            res.push_back(qu.front()->val);
            if (qu.front()->left != nullptr)
            {
                qu.push(qu.front()->left);
            }
            if (qu.front()->right != nullptr)
            {
                qu.push(qu.front()->right);
            }
            qu.pop();
        }
        result.push_back(res);
    }

    return result;
}
