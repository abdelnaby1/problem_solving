#include <iostream>
#include <stack>
#include <vector>
using namespace std;
class Node
{
public:
    int val;
    vector<Node *> children;

    Node() {}

    Node(int _val)
    {
        val = _val;
    }

    Node(int _val, vector<Node *> _children)
    {
        val = _val;
        children = _children;
    }
};
vector<int> preorder(Node *root)
{
    vector<int> result;
    if (root == nullptr)
    {
        return result;
    }
    stack<Node *> stack;
    stack.push(root);
    while (!stack.empty())
    {
        Node *curr = stack.top();
        result.push_back(curr->val);
        stack.pop();
        int i = curr->children.size() - 1;
        while (i >= 0)
        {
            stack.push(curr->children[i]);
            i--;
        }
    }

    return result;
}
int main()
{
    return 0;
}