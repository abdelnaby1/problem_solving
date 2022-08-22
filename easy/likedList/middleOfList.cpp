struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode *middleNode(ListNode *head)
{
    struct ListNode *curr = head;
    int i = 0;
    while (curr != nullptr)
    {
        curr = curr->next;
        i++;
    }
    int middleIndex = 0;
    middleIndex = i / 2;
    int j = 0;
    while (head != nullptr)
    {
        if (j == middleIndex)
        {
            return head;
        }
        head = head->next;
        j++;
    }
    return head;
}