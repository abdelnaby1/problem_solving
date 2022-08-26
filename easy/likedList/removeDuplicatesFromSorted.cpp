struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode *deleteDuplicates(ListNode *head)
{
    if (head == nullptr)
    {
        return head;
    }
    ListNode *curr;
    ListNode *prev;
    if (head->next != nullptr)
    {
        curr = head->next;
        prev = head;
    }
    while (curr != nullptr)
    {
        if (curr->val == prev->val && curr->next == nullptr)
        {
            prev->next = nullptr;
            curr = curr->next;
        }
        else if (curr->val == prev->val)
        {
            curr = curr->next;
        }
        else
        {
            prev->next = curr;
            prev = curr;
            curr = curr->next;
        }
    }
    return head;
}