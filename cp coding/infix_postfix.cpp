#include<iostream>
#include<string>
#include<stack>
using namespace std;
bool isoprend(char c){
	if(c=='+'||c=='-'||c=='/'||c=='*')
		return true;
	else
		return false;
}
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
string infix_postfix(string exp){
	string result;
	stack<char> st;
	for(int i=0;exp[i]!='\0';i++){
		char c=exp[i];
		if(c>='a'&&c<='z'||c>='A'&&c<='Z'||c>=0&&c<=9){
			result+=c;
			cout<<"1"<<result<<endl;
		}
		 if( c=='('){
			st.push(c);
		}
		 if(isoprend(c)){
			while(!st.empty()&&prec(c)<=prec(st.top())){
				char q=st.top();
				result+=q;
				cout<<"2"<<result<<endl;
				st.pop();
				}
			st.push(c);
		}
		if(c==')'){
			while(!st.empty()&&st.top()!='('){
				char q=st.top();
				result+=q;
				cout<<"3"<<result<<endl;
				st.pop();
			}
			st.pop();
		}
	
	//	cout<<result;
	}
		while(!st.empty()){
			char q=st.top();
			result+=q;
			cout<<"4"<<result<<endl;
			st.pop();
		}
		cout<<result;
}
int main(){
	string exp;
	cin>>exp;
	infix_postfix(exp);
}
