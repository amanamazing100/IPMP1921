
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return true;
        ListNode *temp=head, *prev=head;
        int n=1;
        while(temp->next!=NULL){
            temp=temp->next;
            n++;
        }
        bool mid_p=false;
        if(n%2){
            mid_p=true;
        }
        temp=head;
        for(int i=1;i<n/2;i++){
            
            temp=temp->next;
        }
        ListNode *right=temp->next; prev=temp;
        if(mid_p){
            right=right->next;
            prev=prev->next;
        }
        ListNode *left=head;
        ListNode *current=right;
        ListNode *next=right;
        while(current!=NULL){
            next=current->next;
            current->next=prev;
            prev=current;
            current=next;
        }
        right=prev;
        for(int i=1;i<=n/2;i++){
            if(left->val!=right->val)
                return false;
            left=left->next;
            right=right->next;
        }
        return true;
    }
};
