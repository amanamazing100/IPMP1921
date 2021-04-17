
DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* head, int data) {
DoublyLinkedListNode* temp=new DoublyLinkedListNode (data);
//temp->data=data;
DoublyLinkedListNode* comp=head;
if(head->data>=temp->data){
    temp->next=head;
    head->prev=temp;
    return temp;
}

while(comp->data<temp->data){
    if(comp->next!=NULL)
    comp=comp->next;
    else break;
}if(comp->data>temp->data)
comp=comp->prev;
temp->next=comp->next;
comp->next=temp;
temp->prev=comp;
return head;
}
