#include <iostream>

using namespace std;

int main()
{
    
	int t;
	cin>>t;
	for (int i=0;i<t;i++){
		int n;
		cin>>n;
		int arr[n][n];
		for(int i=1;i<=n;i++){
			for(int j=1;j<=i;j++){
				cin>>arr[i][j];
			}
		}
		int ans=0;
		for(int i=1;i<=n;i++){
			int max=0;
			for(int j=1;j<=i;j++){
				if(arr[i][j]>max){
					max=arr[i][j];
				}
			}
			ans+=max;
			}
			cout<<ans-arr[1][1]<<endl;
	}
	
	
    return 0;
}
