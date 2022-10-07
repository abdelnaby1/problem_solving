#include <queue>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};
TreeNode *getTargetCopy(TreeNode *original, TreeNode *cloned, TreeNode *target)
{
    // BFS
    TreeNode *o = original;
    TreeNode *c = cloned;
    queue<TreeNode *> qu;
    queue<TreeNode *> qu2;
    qu.push(o);
    qu2.push(c);
    TreeNode *ans;
    while (!qu.empty())
    {
        o = qu.front();
        qu.pop();
        c = qu2.front();
        qu2.pop();
        if (o == target)
        {
            ans = c;
            return ans;
        }
        if (o->left)
        {
            qu.push(o->left);
            qu2.push(c->left);
        }
        if (o->right)
        {
            qu.push(o->right);
            qu2.push(c->right);
        }
    }
    return ans;
}