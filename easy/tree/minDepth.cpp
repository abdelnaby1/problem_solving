#include <cmath>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};
int minDepth(TreeNode *root)
{
    if (root == nullptr)
    {
        return 0;
    }
    return min(minDepth(root->left), minDepth(root->right)) + 1;
}