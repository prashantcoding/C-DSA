#include<iostream>
using namespace std;
void print(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}
}
//shift array 
//Method-2
int left_rotate_by_one(int arr[],int t){
	while(t--){
	int i,temp;
		for( i=0;i<t;i++){
			temp=arr[i];
			arr[i]=arr[i+1];
			
		}
		arr[i-1]=temp;
	}
}
int main(){
	cout<<"Enter by how many elements you want to shift the array";
	int a;
	cin>>a;
	int arr[5]={0,1,2,3,4};
	 left_rotate_by_one(arr,a);
	print(arr,5);
}

