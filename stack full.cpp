///////////
//stack base 
#include<iostream>
using namespace std;
class stack{
	private:
		static const int max=100;
		int arr[max];
		int top;
	public:
	stack(){
		top=-1;
	}
	bool isempty();
	bool isfull();
	int pop();
	void push(int x);
};
void stack::push(int x){
	if(top>max-1){
		cout<<"Stack Overflow"<<endl;
	}
	else{
		arr[++top]=x;
	}
	
}
int stack::pop(){
	if(top==-1){
		cout<<"stack is underflow"<<endl;
	}
	else{
		int a=arr[top];
		top--;
		return a;
	}
}
bool stack::isempty(){
	if(top==-1)
		return true;
	return false;
}
bool stack::isfull(){
	if(top==max)
		return true;
	return false;
}
int main(){
	stack st;
	st.push(6);
	cout<<st.pop();
		
}
/////////////////////////////////
