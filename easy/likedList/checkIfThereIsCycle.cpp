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
    unordered_set<struct ListNode *> set;
    int i = 0;
    while (head != nullptr)
    {
        if (set.find(head->next) != set.end())
        {
            return true;
        }
        else
        {
            set.insert(head);
        }
        i++;
        head = head->next;
    }
    return false;
}