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
/////////////////////////////////Get Minimum special Stack with time complexity O(1)////////////////////////////////////////////////// 
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
	int getmin(int x);
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
////////sepcial Auxillary stack///////////
class specialstack:public stack{
	stack min;
	public:
		int pop();
		void push(int x);
		int getmin();
	
};
void specialstack::push(int x){
	if(isempty()==true){
		stack::push(x);
		min.push(x);
	}
	else{
		int y=min.pop();
		min.push(y);
		if(x<y){
			min.push(x);
		}
		if(x>y){
			min.push(y);
		}
		
	}
	
}
int specialstack::pop(){
	int x=stack::pop();
	min.pop();
	return x;
}
int specialstack::getmin(){
	int x=min.pop();
	min.push(x);
	return x;
}

int main(){
	
    specialstack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << s.getmin() << endl;
    s.push(5);
    cout << s.getmin();
    return 0;
	
		
}
///////////////////////////////////////////////////////////2 STACK WITH ONE ARRAY///////////////////////////////////////
#include<iostream>
using namespace std;
class stack{
	private:
		static const int max=100;
		int arr[max];
		int top1;
		int top2;
	public:
	stack(){
		top1=-1;
		top2=100;
	}
	bool isempty1();
	bool isfull1();
	bool isempty2();
	bool isfull2();
	int pop1();
	int pop2();
	void push1(int x);
	void push2(int x);
};
void stack::push1(int x){
	if(top1+1>=(max/2)){
		cout<<"Stack Overflow"<<endl;
	}
	else{
		arr[++top1]=x;
	}
	
}
void stack::push2(int x){
	if(top2-1<max/2){
		cout<<"Stack Overflow"<<endl;
	}
	else{
		arr[--top2]=x;
	}
	
}
int stack::pop1(){
	if(top1==-1){
		cout<<"stack is underflow"<<endl;
	}
	else{
		int a=arr[top1];
		top1--;
		return a;
	}
}
int stack::pop2(){
	if(top2==100){
		cout<<"stack is underflow"<<endl;
	}
	else{
		int a=arr[top2];
		top2++;
		return a;
	}
}
bool stack::isempty1(){
	if(top1==-1)
		return true;
	return false;
}
bool stack::isempty2(){
	if(top2==100)
		return true;
	return false;
}
bool stack::isfull1(){
	if(top1==(max/2)-1)
		return true;
	return false;
}
bool stack::isfull2(){
	if(top2==max/2)
		return true;
	return false;
}
int main(){
	stack st;
	st.push1(6);
	st.push2(10);
	cout<<st.pop1();
	cout<<st.pop2();
	cout<<st.isempty2();
		
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
