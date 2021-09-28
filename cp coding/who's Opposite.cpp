#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b,c,fact,circle;
		cin>>a>>b>>c;
		int val=1;
		int diff=abs(a-b);
		if(diff==1){
			val=-1;
			goto end;
		}
	 circle=diff*2;
		if(circle<a||circle<b||circle<c){
			val=-1;
			goto end;
		}
		if(diff>=c){
			val=diff+c;	
		}
		if(diff<c){
			val=c-diff;
		}
		end:
		cout<<val<<endl;
	}
}
