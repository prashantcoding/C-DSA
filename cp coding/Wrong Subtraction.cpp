#include<iostream>
using namespace std;
int main(){
	int a,b;
	cin>>a;
	cin>>b;
	while(b--){
	if(a%10!=0){
		a=a-1;
	}
	else{
		a=a/10;
	}
}
cout<<a;
	
}
