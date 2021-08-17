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
////////////////////uncomment for infix to postfix////////////////////////////
#include<iostream>
#include<stack>
#include<string>
using namespace std;
int prec(char c){
	if(c=='+'||c=='-'){
		return 1;
	}
	else if(c=='*'||c=='/'){
		return 2;
	}
	else if(c=='^'){
		return 3;
	}
	else{
		return -1;
	}
	
}
void infix_postfix(string a){
	string result;
	stack<char>st;
	for(int i=0;a[i]!='\0';i++){
		char c=a[i];
		//cout<<c<<endl;
	//first check for the aplabet and the number
	if(c>='a'&&c<='z'||c>='a'&&c<='z'||c>=0&&c<=9){
		result+=c;
	//	cout<<result<<endl;
	}
	else if(c=='('){
		st.push('(');
	}
	else if(c==')'){
		while(st.top()!='('){
			result+=st.top();
			st.pop();
		}
		st.pop();
	}
	else {
		while(!st.empty()&&prec(a[i])<=prec(st.top())){
			result+=st.top();
			st.pop();
		}
		st.push(c);
	}
	}
    while(!st.empty()) {
        result += st.top();
        st.pop();
    }
 
    cout << result << endl;
}

int main() {
    string exp = "a+b*(c^d-e)^(f+g*h)-i";
    infix_postfix(exp);
    return 0;
} 
//////////////////////////////////////
