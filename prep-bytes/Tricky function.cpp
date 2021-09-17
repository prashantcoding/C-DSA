#include<iostream>
#define llt long long int
using namespace std;
llt func(llt n){
	if(n==0){
		return 0;
	}
	if(n==1){
		return 1;
	}
	if(n%2==0){
		return func(n/2);
	}
	if(n%2!=0){
		return func(n-1)+1;
	}
	
}
int main(){
	int t;
	cin>>t;
	while(t--){
		llt n;
		cin>>n;
		cout<<func(n)<<endl;
		
	}
}
