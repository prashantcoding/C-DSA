#include <iostream>
#include<malloc.h>
using namespace std;

struct node 
{
    int data;    
    struct node *next;
    struct node *prev;
    
}*start;

class double_list
{
    public:
    void display_dllist(node *start);
    void create_llist(int x);
    
    void insertatbegin(int y);
    
    double_list()
    {
        start = NULL;
    }
};
  
void double_list::create_llist(int x)
{
    struct node *s,*temp;
    temp = new(struct node);
    temp->data=x;
    temp->next=NULL;
    if(start==NULL)
    {
        temp->prev=NULL;
        start=temp;
    }
    else
    {
        s = start;
        while(s->next!=NULL)
        s=s->next;
        s->next=temp;
        temp->prev=s;
    }
}
void double_list::insertatbegin(int y)
{
	if(start=NULL)
	{
		cout<<"The Double Linked List has not been created yet"<<endl;
		return;
	}
	struct node *temp;
	temp=new(struct node);
	temp->prev=NULL;
	temp->data=y;
	temp->next=start;
	start->prev=temp;
	start=temp;
	cout<<"Element has been inserted into the Double Linkled List"<<endl;
}

void double_list:: display_dllist(node *start)
{
    if(start==NULL)
    {
        cout<<"List empty , nothing to display "<<endl;
        return;
    } 
    cout<<"The double linked list is : "<<endl;
    while(start!= NULL)
    {
        cout<<start->data;
        start=start->next;
    }
    return;
}

int main()
{
    int value,num;
    double_list dl;
    cout<<"Enter the element :";
    cin>>value;
    cout<<"Enter the element to be inserted= "<<endl;
    cin>>num;
    dl.create_llist(value);
    cout<<endl;
    dl.insertatbegin(num);
    cout<<endl; 
    dl.display_dllist(start);
}
