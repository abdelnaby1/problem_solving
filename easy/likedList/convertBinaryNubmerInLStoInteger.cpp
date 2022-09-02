#include <iostream>
#include <cmath>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
int getDecimalValue(ListNode *head)
{
    int decimal = 0;
    int numofNodes = 0;
    ListNode *curr = head;
    while (curr != nullptr)
    {
        numofNodes++;
        curr = curr->next;
    }
    curr = head;
    while (numofNodes > 0)
    {
        decimal += curr->val * pow(2, --numofNodes);
        curr = curr->next;
    }
    return decimal;
}