struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};
class Solution
{
public:
    int ans = 0;
    void dps(TreeNode *root, int low, int high)
    {
        if (root)
        {
            if (root->val >= low && root->val <= high)
            {
                ans += root->val;
            }
            if (low < root->val)
            {
                dps(root->left, low, high);
            }
            if (root->val < high)
            {
                dps(root->right, low, high);
            }
        }
    }
    int rangeSumBST(TreeNode *root, int low, int high)
    {
        int ans = 0;
        // Stack<TreeNode> stack = new Stack();
        // stack.push(root);
        // while (!stack.isEmpty()) {
        //     TreeNode node = stack.pop();
        //     if (node != null) {
        //         if (low <= node.val && node.val <= high)
        //             ans += node.val;
        //         if (low < node.val)
        //             stack.push(node.left);
        //         if (node.val < high)
        //             stack.push(node.right);
        //     }
        // }
        // return ans;
        dps(root, low, high);
        return ans;
    }
};