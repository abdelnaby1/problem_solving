#include <iostream>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};
class Solution
{
    string ans = "";

public:
    void pre(TreeNode *root)
    {
        if (root)
        {
            ans += to_string(root->val);
            if (root->left)
            {
                ans += '(';
                tree2str(root->left);
                ans += ')';
            }
            if (root->right)
            {
                if (!root->left)
                {
                    ans += "()";
                }
                ans += '(';
                tree2str(root->right);
                ans += ')';
            }
        }
    }
    string tree2str(TreeNode *root)
    {
        pre(root);
        return ans;
    }
};