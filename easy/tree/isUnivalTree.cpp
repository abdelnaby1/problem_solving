#include <unordered_set>
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
    unordered_set<int> set;

public:
    void preorder(TreeNode *root)
    {
        if (root)
        {
            set.insert(root->val);
            preorder(root->left);
            preorder(root->right);
        }
    }
    bool isUnivalTree(TreeNode *root)
    {
        preorder(root);
        if (set.size() > 1)
            return false;
        return true;
    }
};