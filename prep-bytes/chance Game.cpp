#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int t=0;
	cin>>t;
	while(t--){
		int p,s1,s2;
		cin>>p>>s1>>s2;
		cout<<p-max(s1,s2)<<endl;
	}
}
