#include <iostream>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode *removeElements(ListNode *head, int val)
{
    ListNode *curr = head;
    ListNode *prev = curr;
    while (head != nullptr)
    {
        if (head->val == val)
        {
            curr->next = head->next;
            head = head->next;
        }
        else
        {
            curr = head;
            head = head->next;
        }
    }
    if (prev != nullptr && prev->val == val)
    {
        return prev->next;
    }
    return prev;
}