class Node
{
public:
    int data;
    Node *next;
};
class MyLinkedList
{
public:
    Node *first = nullptr;
    int len;
    MyLinkedList()
    {
        Node *first = nullptr;
        len = 0;
    }
    int get(int index)
    {
        if (index < 0 || index >= len)
            return -1;
        Node *curr = first;
        for (int i = 0; i < index; i++)
        {
            curr = curr->next;
        }
        return curr->data;
    }

    void addAtHead(int val)
    {
        Node *no = new Node();
        no->data = val;
        no->next = first;
        first = no;
        len++;
    }

    void addAtTail(int val)
    {
        Node *no = new Node();
        no->data = val;
        Node *curr = first;
        Node *prev;
        len++;
        if (!curr)
        {
            first = no;
            return;
        }
        while (curr)
        {
            prev = curr;
            curr = curr->next;
        }
        prev->next = no;
    }

    void addAtIndex(int index, int val)
    {
        if (index < 0 || index > len)
            return;
        else if (index == len)
            addAtTail(val);
        else if (index == 0)
            addAtHead(val);
        else
        {
            Node *no = new Node();
            no->data = val;
            Node *curr = first;
            for (int i = 0; i < index - 1; i++)
            {
                curr = curr->next;
            }
            no->next = curr->next;
            curr->next = no;
            len++;
        }
    }

    void deleteAtIndex(int index)
    {
        if (index < 0 || index >= len)
            return;
        Node *curr = first;
        Node *temp;
        if (index == 0)
        {
            first = first->next;
            delete curr;
            len--;
        }
        else
        {
            for (int i = 0; i < index; i++)
            {
                temp = curr;
                curr = curr->next;
            }
            temp->next = curr->next;
            delete curr;
            len--;
        }
    }
};
