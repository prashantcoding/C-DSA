#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	char arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int ans=0;
	for(int i=0;i<n;i++){
		if(arr[i]==arr[i+1]){
			ans+=1;
		}
	}
	cout<<ans;
}
