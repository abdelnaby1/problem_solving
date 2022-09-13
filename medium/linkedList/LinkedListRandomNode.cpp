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
class Solution
{
public:
    vector<int> l;
    Solution(ListNode *head)
    {
        ListNode *curr = head;
        while (curr)
        {
            l.push_back(curr->val);
            curr = curr->next;
        }
    }

    int getRandom()
    {
        return l[rand() % l.size()];
    }
};