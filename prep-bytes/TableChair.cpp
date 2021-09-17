#include<iostream>
using namespace std;
int main(){
	long long t=0;
	cin>>t;
	while(t--){
		long long M=0,R1=0,R2=0,R3=0;
		cin>>M>>R1>>R2>>R3;
	   int q=M%4;
	   
	   if(q==0) cout<<0;
		 if(q==1)	cout<<min(R3,min(R2+R1,R1+R1+R1));
		 if(q==2)cout<<min(R2,min(R1+R1,R3+R3));
		 if(q==3) cout<<min(R1,min(R3,R2+R3));
		 cout<<"\n";
		
}
}
