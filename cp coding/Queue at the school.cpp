#include<iostream>
#include<string>
using namespace std;

int main(){
	int n,t;
	cin>>n>>t;

	string s;	
	cin>>s;
	while(t--){
		for(int i=0;i<s.size()-1;i++){
			if(s[i]=='B'&&s[i+1]=='G'){
				s[i+1]='B';
				s[i]='G';
				i+=1;
			}
		}
	}
	cout<<s;
}
