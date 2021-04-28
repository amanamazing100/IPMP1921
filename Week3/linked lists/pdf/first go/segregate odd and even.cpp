
void segregateEvenOdd(Node **head_ref)
{
	//create two had nodes for vn and odd, keep linking the nodes in them
	//curr even and curr odd for pushing
	Node *even=*head_ref;
	Node *odd=*head_ref;
	Node *curr_even=even;
	Node *curr_odd=odd;
	Node *curr=*head_ref;
	while(curr!=NULL){
		if(curr->data%2==0)
			break;
		curr=curr->next;
	}
	if(curr==NULL){
		return;
	}
	even=curr;
	curr_even=even;
	curr=*head_ref;
	while(curr!=NULL){
		if(curr->data%2!=0)
			break;
		curr=curr->next;
	}
	if(curr==NULL){
		return;
	}
	odd=curr;
	curr_odd=odd;
	curr=*head_ref;
  curr=curr->next;
	while(curr!=NULL){
		if(curr->data%2==0 && curr!=even){
          //cout<<"e"<<curr_even->data<<" ";
			curr_even->next=curr;
			curr_even=curr;
		}
		else if(curr!=odd) {
          //cout<<"o"<<curr_odd->data<<" ";
			curr_odd->next=curr;
			curr_odd=curr;
		}
		curr=curr->next;
	}
	curr_odd->next=NULL;
	curr_even->next=odd;
}

