#include<iostream>
#include<string>
using namespace std;
int main(){
	int t;
	cin>>t;
	int ans=0;
	int inc=0;
	int dec=0;
	while(t--){
		string s;
		cin>>s;
		if(s=="X++"||s=="++X"){
			inc+=1;
		}
		 if(s=="X--"||s=="--X"){
			dec+=1;
		}
	}
	cout<<inc-dec;
}
