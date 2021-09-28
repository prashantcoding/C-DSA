#include<iostream>
#include<stack>
using namespace std;
int main(){
	int t;
	cin>>t;
	stack<int> st;
	for(int i=0;i<t;i++){
		int a,b;
		cin>>a>>b;
		if(st.empty()==true){
			st.push(a);
		}
		if(a>0&&a<=st.top()){
			int rem=st.top();
			rem=rem-a;
			
			st.push(rem);
		}
		if(b>0){
			//cout<<"hii";
			int rem=st.top();
			rem=rem+b;
			
			st.push(rem);
		}
	
	//	cout<<st.top();	
	}
	int max=0;
	while(st.empty()==false){
		int c=st.top();
		if(c>max){
			max=c;
		}
		st.pop();
	}
	cout<<max;
	
}
