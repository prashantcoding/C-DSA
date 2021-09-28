#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main(){
	string a;
	cin>>a;
	string b;
	cin>>b;
	stack<char> st; 
	for(int i=0;a[i]!='\0';i++){
		st.push(a[i]);
	}
	string rev_word;
	while(st.empty()==false){
		rev_word+=st.top();
		st.pop();
	}
	if(b==rev_word){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
}
