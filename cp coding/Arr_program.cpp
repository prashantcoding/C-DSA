#include<iostream>
using namespace std;
//funtion to transverse the array
void print(int arr[],int n){
	cout<<"\n";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
//function to reverse the array ;
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

//function to delete an element from array 
int del(int arr[],int n,int key){
	for(int i=0;i<n;i++){
		if(arr[i]==key){
			for(i;i<n;i++){
				arr[i]=arr[i+1];
			}
		}
	}
		return n-1;
}
//function to insert an element in the array(at end )
int   insert(int arr[],int n,int data){
		arr[n]=data;
		n=n+1;
		//print(arr,n);
		return n;
}
//search 
void search(int arr[],int size,int key){
	for(int i=0;i<size;i++){
		if(arr[i]==key){
			cout<<"Element is on  this index"<<i<<endl;
			break;
		}
	}
}
//sorting Algorithm in the array{bubble sort} 
void sort(int arr[],int n){  
	//int min=arr[0];
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]<arr[j]){
				int temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}
	
}
//sorting Algorithm insertion sort 
void sort_insertion(int arr[],int n){
	int i=0;
	for(int i=i+1;i<n;i++){
		//cout<<"hii";
		for(int j=0;j<i;j++){
			if(arr[j]>arr[i]){
				//cout<<"hii2";
				int temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
				//cout<<arr[i];
			}
		}
	}
}
//rotate element by k step(method-1)
void rot1(int arr[],int n,int k){
	while(k--){
		int temp=arr[0];
		int i;
		for(i=0;i<n;i++){
			arr[i]=arr[i+1];	
		}                                    
		arr[i-1]=temp;
		//	print(arr,7);
	//	cout<<arr[i];
	}
}
int main(){
	int arr[]={7,6,5,4,3,2,1};
	
	reversal(arr,0,6);
	print(arr,7);
	int n=del(arr,7,5);
	print(arr,n);
	n=insert(arr,n,10);
	print(arr,n);
	sort_insertion(arr,7);//ascending order
	
	rot1(arr,7,2);
	print(arr,7);
	
	return 0;
}
