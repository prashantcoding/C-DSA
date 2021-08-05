
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
int sum_list(node *head){
		node *temp=head;
		int n1=0;
		while(temp!=NULL){
		    int k=temp->data;
            n1=n1*10+k;
            temp=temp->next;
        }
        return n1;
}
void sum_rev(node *l1,node *l2){
	node *sum=new node();
	node *a=l1;
	node *b=l2;
        int n1=0,n2=0;
        n1=sum_list(l1);
        n2=sum_list(l2);
         cout<<"n1 "<<n1<<endl;
        cout<<"n2 "<<n2<<endl;
		n1=n1+n2;
        cout<<"n value"<<n1<<"\n";
        int rev=0;
        while(n1>0){
            rev=rev*10+n1%10;
            n1=n1/10;
        }
        cout<<"rev value"<<rev<<endl;
        node*fresh=sum;
        sum->next=NULL;
        sum->data=rev%10;
        rev=rev/10;
        while(rev>0){
            append(&sum,rev%10);
            rev=rev/10;
        }
 		print(sum);   
}

int main(){
	node *head=NULL;
	node *second=NULL;
	node *third=NULL;
	head=new node();
	second=new node();
	third=new node();
	head->data=2;
	head->next=second;
	second->data=4;
	second->next=third;
	third->data=3;
	third->next=NULL;
	//2nd linked list
	node *head2=NULL;
	node *second2=NULL;
	node *third2=NULL;
	head2=new node();
	second2=new node();
	third2=new node();
	head2->data=5;
	head2->next=second2;
	second2->data=6;
	second2->next=third2;
	third2->data=4;
	third2->next=NULL;
	
	sum_rev(head,head2);
	
}

///////////////Merge two sorte link list in shorted way logic/////////////////////////
/*
SinglyLinkedListNode *fresh=head1;
            while(head1->next!=NULL){
                head1=head1->next;
            }
            head1->next=head2;
            
            SinglyLinkedListNode *current_ptr=fresh->next;
            
            while(current_ptr!=NULL){
                SinglyLinkedListNode *prev_ptr=fresh;
                while(prev_ptr!=current_ptr){
                    if(prev_ptr->data>current_ptr->data){
                        int temp=prev_ptr->data;
                        prev_ptr->data=current_ptr->data;
                        current_ptr->data=temp;
                    }
                    prev_ptr=prev_ptr->next;
                }
                current_ptr=current_ptr->next;     
            }
            return fresh;*/