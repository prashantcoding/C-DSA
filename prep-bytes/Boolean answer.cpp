#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int N,M;
		cin>>N>>M;
		int arr[N][M];
		for(int i=0;i<N;i++){
			for(int j=0;j<M;j++){
				cin>>arr[i][j];
			}
		}
		int sum=0;
		int max=0;
		int max_index=0;
		for(int i=0;i<N;i++){
			sum=0;
			for(int j=0;j<M;j++){
				sum+=arr[i][j];
			}
			if(sum>=max){
				max=sum;
				max_index=i;
			}
		}
		if(max==0){
			cout<<-1<<endl;
			goto end;
		}
		cout<<max_index<<endl;
		end:
		cout<<endl;
	}
}
