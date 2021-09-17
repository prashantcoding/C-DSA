//increase sub_array with maximum length
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int max=1,len=1;
	for(int i=1;i<=n-1;i++){
		if(arr[i]>arr[i-1])
		len++;
		else{
			if(max<len) max=len;
			len=1;
		}
		if(max<len) max=len;
	}
	cout<< max;
}
