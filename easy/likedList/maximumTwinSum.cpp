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
int pairSum(ListNode *head)
{
    vector<ListNode *> list;
    ListNode *curr = head;
    int sum = 0;
    while (curr != nullptr)
    {
        list.push_back(curr);
        curr = curr->next;
    }
    int length = list.size();
    for (int i = 0; i < length / 2; i++)
    {
        int twinSum = list[i]->val + list[length - 1 - i]->val;
        if (sum < twinSum)
        {
            sum = twinSum;
        }
    }
    return sum;
}