
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int s1=1, s2=1;
        ListNode *temp1=headA;
        while(temp1->next!=NULL){
            s1++;
            temp1=temp1->next;
        }
        temp1=headB;
        while(temp1->next!=NULL){
            s2++;
            temp1=temp1->next;
        }
        ListNode *temp2=headA;
        if(s1<s2){
            temp1=headB;
            
        temp2=headA;
        }
        else{ temp1=headA;
             
temp2=headB;}
        if(s2>s1){
            int temp=s1;
            s1=s2;
            s2=temp;}
        while(abs(s2-s1)!=0){
            temp1=temp1->next;
            s1--;
            
        }
        while(temp1!=NULL){
            if(temp1->val==temp2->val && temp1->val==)
                return temp1;
            if(temp1->next!=NULL){
                temp1=temp1->next;
                temp2=temp2->next;
            }
            else return NULL;
        }
        return temp1;
    }   
};
