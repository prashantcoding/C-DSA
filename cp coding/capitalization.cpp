#include<iostream>
using namespace std;
int main(){
	string a;
	cin>>a;
	char c=a[0];
	if(c>='a'&&c<='z')
	{int q=c-32;
	a[0]=q;}
	cout<<a;
}
