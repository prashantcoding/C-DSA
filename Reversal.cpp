#include<iostream>
using namespace std;
void print(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}
}
void reversal(int arr[],int start,int end){
	while(1){
		//cout<<"start and end"<<start<<end<<endl;
		if(start==end||start>end){
			break;
		}
		int temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		//cout<<"arr start and end"<<arr[start]<<arr[end];
		
		start++;
		end--;
		
	}
	
}

int main(){
	int arr[]={1,2,3,4,5,6,7};
	reversal(arr,0,1);
	
	print(arr,7);
	reversal(arr,2,6);
		cout<<"\n";
	print(arr,7);
		cout<<"\n";
	reversal(arr,0,6);
		cout<<"\n";
	print(arr,7);
}
