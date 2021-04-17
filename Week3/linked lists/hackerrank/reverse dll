DoublyLinkedListNode* reverse(DoublyLinkedListNode* head) {
//have two pointers current and prev, curr next=prev
//curr prev=curr next
//prev=curr curr=currprev
DoublyLinkedListNode *prev=NULL;
DoublyLinkedListNode *curr=head;
while(curr!=NULL){
    curr->prev=curr->next;
    curr->next=prev;
    prev=curr;
    curr=curr->prev;
}
return prev;
}
