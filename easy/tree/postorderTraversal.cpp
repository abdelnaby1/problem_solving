#include <vector>
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
private:
    vector<int> res;

public:
    vector<int> preRec(TreeNode *root)
    {
        if (root->left)
        {
            preRec(root->left);
        }
        if (root->right)
        {
            preRec(root->right);
        }
        res.push_back(root->val);
        return res;
    }
    vector<int> postorderTraversal(TreeNode *root)
    {
        if (root == nullptr)
        {
            return res;
        }
        return preRec(root);
    }
};