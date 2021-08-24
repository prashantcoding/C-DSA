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
/////////////////////////////////Get Minimum special Stack////////////////////////////////////////////////// 
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
///////////////////////////////////////////////////////////////
