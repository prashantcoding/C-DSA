#include<iostream>
using namespace std;
int main(){
	int arr[]={10,11,1,2,3};
	int n=5;
	int temp1=0;
	int temp2=0;
	for(int i=0;i<n-1;i++){
		arr[i]=arr[i]^arr[i+1];
		}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
