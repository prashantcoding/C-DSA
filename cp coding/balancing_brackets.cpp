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
