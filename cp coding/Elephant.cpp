#include<iostream>
using namespace std;
int main(){
	int arr[]={1,2,3,4,5};
	int n;
	cin>>n;
	int ans=0;
	while(n>0){
		
	if(n>=5){
		n=n-5;
		ans+=1;                       
	}
	 else if(n==4){
		n=n-4;
		ans+=1;
	}
	 else if(n==3){
		n=n-3;
		ans+=1;
	}
	 else if(n==2){
		n=n-2;
		ans+=1;
	}
	else if(n==1){
		n=n-1;
		ans+=1;
	}
	else{
		
	}
		
}
cout<<ans;

}
