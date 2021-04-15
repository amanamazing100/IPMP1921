
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
      
    if (!head)
        return NULL;
    ListNode* current = head;
    ListNode* next = NULL;
    ListNode* prev = NULL;
    int count = 0;
        int no=1;
        ListNode *temp1=head;
        while(temp1->next!=NULL){
            temp1=temp1->next;
            no++;
        }
        if(no<k)
            return head;
    while (current != NULL && count < k) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
        count++;
    }
    if (next != NULL)
        head->next = reverseKGroup(next, k);
    return prev;

    }
};
