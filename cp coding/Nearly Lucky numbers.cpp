#include<iostream>
#define llt long long int
using namespace std;
int main(){
	llt n;
	cin>>n;
	llt ans=0;
	while(n>0){
		if(n%10==4||n%10==7){
			 ans+=1;
		}
		n=n/10;
	}
	
	if(ans==4||ans==7){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	
}
