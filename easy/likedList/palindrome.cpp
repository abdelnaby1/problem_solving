#include <iostream>
#include <stack>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
bool isPalindrome(ListNode *head)
{
    stack<ListNode *> stack;
    ListNode *curr = head;
    while (curr != nullptr)
    {
        stack.push(curr);
        curr = curr->next;
    }
    while (!stack.empty())
    {
        if (stack.top()->val != head->val)
        {
            return false;
        }
        stack.pop();
        head = head->next;
    }
    return true;
}