#include <cmath>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};
int maxDepth(TreeNode *root)
{
    if (root == nullptr)
    {
        return 0;
    }
    return max(maxDepth(root->left), maxDepth(root->right)) + 1;
}