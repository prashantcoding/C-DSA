//QUE-1)Write a program to reverse a link list
#include<iostream>
using namespace std;
class node{
	public:
	int data;
	node *next;
};
//adding node at the end
void append(node **head,int data){
	
	node*temp=new node();
	temp=*head;
	node *new_node=new node();
	new_node->data=data;
	if(*head==NULL){
		*head=new_node;
		return;
	}
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=new_node;
	
	new_node->next=NULL;
}

void print(node *head){
	while(head!=NULL){
		cout<<head->data<<" ";
		head=head->next;
	}
	
}
//deleting the duplicate node 
void delete_duplicate(node **head){
	node *prev=*head;
//	node *next=*head;
	node *curent=*head;
	if(prev->next==NULL){   //base case;
		return;
	}
	//next=next->next;
	
	
	while(prev->data==curent->next->data){
		//next=next->next;
		curent=curent->next;
	}
	prev->next=curent->next;
	delete curent;
	if(prev->next!=NULL){
		delete_duplicate(&prev->next);
	}
}
void reverse(node **head){
	node *prev=NULL;
	node *current=*head;
	node *Next=*head;
	//int count=0;
	while(current!=NULL){
		Next=current->next;
		current->next=prev;
		prev=current;
		current=Next;
		//count++;
	}
	*head=prev;
	
		
}
//delete duplicate in the unsorted array
void remove_dup(node **head){
	node *fresh=*head;
	node *du=NULL;
	node *prev=*head;
	int value=fresh->data;
	node *current=prev->next;
	
	if(fresh->next==NULL){
		return;
	}

	while(current->next!=NULL){
		if(current->data==value){
			prev->next=current->next; //here we are changing the adress;:)
			du=current;
			current=current->next;
			delete du;
		}
		current=current->next;//just moving 
		prev=prev->next;
	}
	if(fresh->next!=NULL){
		remove_dup(&fresh->next);
	}

}
void move_last_first(node **head){
	node *prev=*head;
	node *current=prev->next;
	while(current->next!=NULL){
		current=current->next;
		prev=prev->next;
	}
	current->next=*head;
	prev->next=NULL;
	*head=current;

}
//sum of the linked list (Add 1 in numetb)
int  Add_1(node *head){
	int value=0;
	while(head!=NULL){
		int a=1;
		int temp=head->data;
		while(temp!=0){
			temp=temp/10;
			a=a*10;

		}
		value=value*a+head->data; //2,20+2
		head=head->next;
	}
	cout<<value+1;
}

int main(){
	node *head=NULL;
	node *second=NULL;
	node *third=NULL;
	head=new node();
	second=new node();
	third=new node();
	head->data=11;
	head->next=second;
	second->data=11;
	second->next=third;
	third->data=11;
	third->next=NULL;
	append(&head,13);
	append(&head,13);
	append(&head,20);
//	append(&head,60);
	print(head);
	cout<<"delete"<<endl;
	delete_duplicate(&head);
	print(head);
	cout<<"\n";
	
	
}
///function to delte an num ber
