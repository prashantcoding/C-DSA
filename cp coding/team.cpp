#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	
	int sum=0;
	while(t--){
		int tot=0;
		int arr[3];
		for(int i=0;i<3;i++){
			cin>>arr[i];
			if(arr[i]==1){
				tot+=1;
			}
		}
		if(tot>=2){
			sum+=1;
		}
	}
	cout<<sum;
}
