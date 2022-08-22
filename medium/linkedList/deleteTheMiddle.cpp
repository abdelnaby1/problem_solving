
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode *deleteMiddle(ListNode *head)
{
    struct ListNode *curr = head;
    int i = 0;
    while (curr != nullptr)
    {
        curr = curr->next;
        i++;
    }
    if (i == 1)
    {
        return nullptr;
    }
    int middleIndex = 0;
    middleIndex = i / 2;
    int j = 0;
    curr = head;
    while (curr != nullptr)
    {
        if (j - middleIndex == -1)
        {
            struct ListNode *temp = curr->next->next;
            curr->next = temp;
            return head;
        }
        curr = curr->next;
        j++;
    }
    return head;
}
