#include<iostream>
#define llt long long int
using namespace std;
int main(){
	llt n;
	cin>>n;
	int q=0;
	if(n%10==n){
		q=1;
		goto end;
	}
	while(n>0){
		
		if(n%10==4||n%10==7){
				n=n/10;
		}
		else{
			q=1;
			break;
		}
	
	}
	;
	end:
	if(q==1)
		cout<<"NO";
	else
		cout<<"YES";
}
