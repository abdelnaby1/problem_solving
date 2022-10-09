#include <queue>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};
vector<double> averageOfLevels(TreeNode *root)
{
    vector<double> ans;
    queue<TreeNode *> qu;
    qu.push(root);
    while (!qu.empty())
    {
        double sum = 0;
        double count = 0;
        queue<TreeNode *> temp;
        while (!qu.empty())
        {
            root = qu.front();
            qu.pop();
            sum += root->val;
            count++;
            if (root->left)
            {
                temp.push(root->left);
            }
            if (root->right)
            {
                temp.push(root->right);
            }
        }
        qu = temp;
        ans.push_back(sum / count);
    }
    return ans;
}