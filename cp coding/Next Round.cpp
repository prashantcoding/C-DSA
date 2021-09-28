#include<iostream>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	int arr[n]={0};
	int tot=0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int val=arr[k];
	for(int i=0;i<n;i++){
		if(arr[i]>=val&&arr[i]!=0){
			tot+=1;
		}
	}
	cout<<tot;
}
