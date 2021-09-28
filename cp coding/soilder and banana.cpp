#include<iostream>
using namespace std;
int main(){
	int k,n,w;
	cin>>k>>n>>w;
	int b=0;
	int i=1;
	while(w--){
		b+=k*i;
		i++;
	}
	if(b>n){
		cout<<b-n;
		
	}
	else{
		cout<<0;
	}
	
}
