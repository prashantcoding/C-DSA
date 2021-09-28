#include<iostream>
#include<algorithm>
using namespace std;
int fun(int arr[],int n,int i){
	if(arr[i]>arr[i+1]){
		int temp=arr[i];
		arr[i]=arr[i+1];
		arr[i+1]=temp;
	}
}
bool notsorted(int arr[],int n){
	for(int i=0;i<n;i++){
		if(arr[i]>arr[i+1]){
			return true;
		}
		
	}
	return false;
}
void print_arry(int arr[],int n){
	for(int i=1;i<=n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main(){
	int t;
	cin>>t;
	
	while(t--){
		int ans=0;
	int n;
	cin>>n;
	int arr[n];
	
	for(int i=1;i<=n;i++){
		cin>>arr[i];
	}

	
	for(int i=1;i<=n;i++){
		if(notsorted(arr,n)&&i%2!=0){
				int q=1;
				while(q<=n-2){
					fun(arr,n,q);
					q=q+2;
				}
			
		//	print_arry(arr,n);
			ans+=1;
		}
		else if(notsorted(arr,n)&&i%2==0){
				int q=2;
				while(q<=n-1){
					fun(arr,n,q);
					q=q+2;
				}
		
		//	print_arry(arr,n);
		 	
		ans+=1;
	}
	
	
}
cout<<ans<<endl;
	
}

}
