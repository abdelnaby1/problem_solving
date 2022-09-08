struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode *mergeNodes(ListNode *head)
{
    ListNode *curr = head;
    ListNode *temp;
    while (curr)
    {
        int sum = 0;
        temp = curr->next;
        while (temp && temp->val != 0)
        {
            sum += temp->val;
            temp = temp->next;
        }
        if (temp)
        {
            // temp->val = sum;
            curr->val = sum;
        }
        if (!temp->next && temp->val == 0)
        {
            temp = nullptr;
        }
        curr->next = temp;
        curr = curr->next;
    }
    return head;
}