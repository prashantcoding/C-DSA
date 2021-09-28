#include<iostream>
#include<string>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	
	string c;
	cin>>c;
	if(c.length()>10){
	cout<<c[0];
	int size=c.length();
	cout<<size-2;
	cout<<c[size-1]<<endl;}
	else{
		cout<<c<<endl;
	}
}
}
