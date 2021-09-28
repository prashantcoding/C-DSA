#include<iostream>
using namespace std;
int main(){
	int arr[]={2,4,7,8,9,10};
	int n=6;
	 for(int i=0;i<n-1;i=i+2){
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    for(int i=0;i<n;i++){
    	cout<<arr[i]<<" ";
	}
}
