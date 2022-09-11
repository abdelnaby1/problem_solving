#include <iostream>
#include <unordered_set>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
bool hasCycle(ListNode *head)
{
    // unordered_set<struct ListNode *> set;
    // int i = 0;
    // while (head != nullptr)
    // {
    //     if (set.find(head->next) != set.end())
    //     {
    //         return true;
    //     }
    //     else
    //     {
    //         set.insert(head);
    //     }
    //     i++;
    //     head = head->next;
    // }
    // return false;

    // with less memory // using 2 pointer2 approach
    if (!head)
        return false;
    ListNode *fast = head;
    ListNode *slow = head;
    do
    {
        fast = fast->next;
        slow = slow->next;
        fast = fast != NULL ? fast->next : NULL;
        if (fast == slow && fast && slow)
            return true;
    } while (slow && fast);

    if (fast == slow && fast && slow)
        return true;
    else
    {
        return false;
    }
}