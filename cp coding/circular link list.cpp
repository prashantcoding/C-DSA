#include<iostream>
using namespace std;
class node{
	public:	
	int data;
	node *next;
	node*append(node *head,int data){
		node *new_node=new node();
		new_node->data=data;
		new_node->next=NULL;
	}
};

int main(){
	node head;
	head.data=6;
	head.next=NULL;
	head.append(head,10);
}
