#include <iostream>
#include <vector>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode *swapNodes(ListNode *head, int k)
{
    vector<ListNode *> list;
    while (head != nullptr)
    {
        list.push_back(head);
        head = head->next;
    }
    int temp = list[k - 1]->val;
    list[k - 1]->val = list[list.size() - k]->val;
    list[list.size() - k]->val = temp;
    cout << list.size();
    return list[0];
}