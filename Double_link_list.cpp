#include<iostream>
using namespace std;
class node{
	public:
	int data;
	node *next;
	node *prev;
	node(){
		next=NULL;
		prev=NULL;
	}
	node(int t){
		data=t;
		next=NULL;
		prev=NULL;
	}
	
	void push(node **head,int data);
	void print(node *head);
	void rev_print(node *head);
	void infornt(node **head,int data);
	void any_place(node **head,int data,int pos);
	void del_any_place(node **head,int pos);
};
void node::print(node *head){
	while(head!=NULL){
		cout<<head->data<<" ";
		head=head->next;
	}
}
void node::rev_print(node *head){
	while(head->next!=NULL){
		head=head->next;
	}
	cout<<head->data<<" ";
	while(head->prev!=NULL){
		head=head->prev;
		cout<<head->data<<" ";	
	}
}
//end of the ddl 
// deletion at any position
void node::del_any_place(node **head,int pos){
	int count=1;
	node *temp=*head;
	node *new_node=new node(data);
	if(pos==1){
		temp=temp->next;
		temp->prev=NULL;
		*head=temp;
		return;
	}
	while(count!=pos){
		temp=temp->next;
		count++;                
	}
	temp->prev->next=temp->next;
	temp->next->prev=temp->prev;
	delete(temp);
}
//void node delete using recursion
node *node::del_any_place_Recu(node *head,int pos,int count){
	if(pos==count){
		return head->prev;
		return head->next;
	}
	else{
		
	}
}
/////////////////////////////////////////
void node::push(node **head,int data){
	
	node *temp=*head;
	node *new_node=new node(data);
	if(head==NULL){
		*head=new_node;
		return;
	}
	else{
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=new_node;
		new_node->prev=temp;
		
		return;
	}
}
//insertion at beginning;
void node::infornt(node **head,int data){
	node *temp=*head;
	node *new_node=new node(data);
	new_node->next=temp;
	temp->prev=new_node;
	*head=new_node;
}
//insertion at any node
void node::any_place(node **head,int data,int pos){
	int count=1;
	node *temp=*head;
	node *new_node=new node(data);
	while(count!=pos){
		temp=temp->next;
		count++;
	}
	new_node->next=temp->next;
	new_node->prev=temp;
	temp->next=new_node;
}
int main(){
	node ll;
	node *first=NULL;
	first=new node(10);
	ll.push(&first,20);
	ll.push(&first,30);
	ll.print(first);
	cout<<endl;
	ll.rev_print(first);
	cout<<endl;
	cout<<"enter infornt"<<endl;
	ll.infornt(&first,12);
	ll.print(first);
	cout<<endl;
	cout<<"at any postion"<<endl;
	ll.any_place(&first,13,2);
	ll.print(first);
	cout<<endl;
	ll.del_any_place(&first,4);
	ll.print(first);

}
