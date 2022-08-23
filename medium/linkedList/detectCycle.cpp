#include <iostream>
#include <map>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode *detectCycle(ListNode *head)
{
    map<struct ListNode *, int> myMap;
    int i = 0;
    while (head != nullptr)
    {
        if (myMap.find(head->next) != myMap.end())
        {
            return myMap.find(head->next)->first;
        }
        else
        {
            myMap[head] = i;
        }
        i++;
        head = head->next;
    }
    return head;
}
