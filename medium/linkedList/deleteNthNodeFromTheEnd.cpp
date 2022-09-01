 #include <iostream>
#include <map>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 ListNode* removeNthFromEnd(ListNode* head, int n) {
       struct ListNode *curr = head;
        int i = 0;
        while (curr != nullptr)
        {
            curr = curr->next;
            i++;
        }
        if (i == 1 && n==1)
        {
            return nullptr;
        }
        if(i-n ==0){
            head = head->next;
            return head;
        }
        curr = head;
        int j=0;
        while(curr !=nullptr){
            if(j == i-n-1){
                curr->next = curr->next->next;
                break;
            }else{
                curr = curr->next;
            }
            j++;
        }
        return head;
    }