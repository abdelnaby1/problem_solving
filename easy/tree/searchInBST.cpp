struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};
TreeNode *searchBST(TreeNode *root, int val)
{
    if (!root)
        return nullptr;
    if (root->val == val)
        return root;
    else if (root->val > val)
    {
        return searchBST(root->left, val);
    }
    else
    {
        return searchBST(root->right, val);
    }
}