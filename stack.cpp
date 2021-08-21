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
///////////////////////////Balancing Brackets/////////////////////////////////
//balancing brackets in a equation using stack
#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main(){
	string exp="()()[()]";
	stack<char> ex;
	for (int i=0;exp[i]!='\0';i++){
		//cout<<"HII";
		char c=exp[i];
	//	cout<<"the char"<<c;
		if(c=='('||c=='{'||c=='['){
				//cout<<"hii";
				ex.push(c);
		}
		else{
		switch(c){
			case ')':
				if(ex.empty()){
					cout<<"exp is not balanced \n";
					return 0;
				}
				else{
					char q=ex.top();
					ex.pop();
					cout<<"q value is "<<q<<endl;
					if(q!='('){
					cout<<"exp is not balance by(\n";
					return 0;}
				}     
				break;
				case '}':
				if(ex.empty()){
					cout<<"exp is not balanced\n";
					return 0;
				}
				else{
					char q=ex.top();
					ex.pop();
					if(q!='{'){
					cout<<"exp is not balance by {\n";
					return 0;}
				}
				break;
				case ']':
				if(ex.empty()){
					cout<<"exp is not balanced\n";
					return 0;
				}
				else{
					char q=ex.top();
					ex.pop();
					if(q!='['){
					cout<<"exp is not balance\n by [";
					return 0;}
				}     
				break;                                                             
		}
	}
	
}

if(!ex.empty()){
		cout<<"exp is not balanced";
	}
	else{
		cout<<"exp is balanced";
	}
	
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
////////////////////////////postfix evaluation////////////////////////////////////////////////
//postifix evaluation using stack;
#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main(){
	string s;
	cin>>s;
	stack<int> st;
	for(int i=0;s[i]!='\0';i++){
		char c=s[i];
		if(isdigit(s[i])){
			c=s[i]-'0';
			st.push(c);
		}
		else{
			int a=st.top();
			st.pop();
			int b=st.top();
			st.pop();
			switch(c){
			
				case '+': st.push(a+b);
				break;
				case '-': st.push(b-a);
				break;
				case '*': st.push(a*b);
				break;
				case '/':st.push(b/a);}
		}
	}
	cout<<st.top();
}
////////////////////////////////////////////////////////////////////////////////////////////
