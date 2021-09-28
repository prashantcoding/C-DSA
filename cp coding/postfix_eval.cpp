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
