#include<iostream>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	int ans=0;
	while(a<=b){
		a=a*3;
		b=b*2;
		ans+=1;
	}
	cout<<ans;
}
