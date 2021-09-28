#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	string a;
	cin>>a;
	sort(a.begin(),a.end());
	int ans=0;
	//cout<<"stirng "<<a<<endl;
	for(int i=0;a[i]!='\0';i++){
		ans+=1;
		while(a[i]==a[i+1]){
			i++;
		}
		
	}
	if(ans%2==0){
		cout<<"CHAT WITH HER!";
	}
	else{
		cout<<"IGNORE HIM!";
	}
	
}
