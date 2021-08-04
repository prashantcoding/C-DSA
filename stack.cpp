#include<iostream>
#define max 5
using namespace std;
class stack{
	private:
	
		int top;	
	public:
		int arr[max]={0};
	
	stack(){
		 top=-1;
	}
	
	void pop(){
		if(top==-1){
			cout<<"stack UnderFlow\n";
			return;
		}
		else{
			int x=arr[top--];
			cout<<"pop out\n"<<x;
		
				
		}
			
	}
	void push(int data){
		if(top>=max-1){
			cout<<"stack overflow\n"<<endl;
		}
		else{
			arr[++top]=data;
			
		}
	}
	bool isEmpty(){
		if(top==-1){
			return true;
		}
		return false;
	}
	int peek(){
		return arr[top];
	}
};

int main(){
	/////////////Stack Creation USing Array//////////////////////////////////
	stack one;
	one.push(121);
	if(one.isEmpty())
	cout<<"stact is empty";
	else{
	cout<<"stack is not empty\n";
	}
	cout<<one.peek();
	one.pop();
	///////////Stack Creation Using Linked List//////////////////////////////
	
	
}
