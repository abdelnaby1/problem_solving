#include <iostream>
#include <unordered_map>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
{
    unordered_map<ListNode *, int> hash;
    ListNode *A = headA;
    ListNode *B = headB;
    while (A != nullptr)
    {
        hash[A]++;
        A = A->next;
    }
    while (B != nullptr)
    {
        if (hash[B] > 0)
        {
            return B;
        }
        else
        {
            hash[B]++;
        }
        B = B->next;
    }
    // unourded_map<ListNode*, int>::iterator itr;
    return nullptr;
}