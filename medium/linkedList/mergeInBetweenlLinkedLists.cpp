struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        // int i =0,j;
        // ListNode* curr = list1;
        // ListNode* temp;
        // while(curr->next){
        //     if(i == a-1){
        //         temp = curr->next;
        //         curr->next = list2;
        //         j =  i;
        //     }
        //     // if(!curr->next) last = curr;
        //     curr = curr->next;
        //     i++;
        // }
        // while(j < b){
        //     temp = temp->next;
        //     j++;
        // }
        // curr->next = temp;
        // return list1;
        
        //another sol
        int i =0;
        ListNode* curr = list1;
        ListNode* node;
        ListNode* temp;
        while(curr){
            if(i == a-1){
                node =curr;    
            }
            if(i == b) {
                node->next = list2;
                break;
            }
            curr = curr->next;
            temp = curr;
            i++;
        }
        curr = list1;
        while(curr->next){
            curr = curr->next;
        }
        curr->next = temp->next;
        return list1;
    }
};