#include<iostream>
#include<stack>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	string a;
	cin>>a;
	vector <int> as;
	for(int i=0;a[i]!='\0';i++){
		char c=a[i];
		if(isdigit(c)){
		//	cout<<"1";
			as.push_back(c-'0');
		}
	
	}
	
	sort(as.begin(),as.end());
	 for(int i=0;i<as.size();i++){
	 	cout<<as[i];
	 	if(i+1<as.size()){
	 		cout<<"+";
		 }
	 }
}
