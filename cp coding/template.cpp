#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int result=0;
    int sum=0;
    if(n==2){
    	cout<<2<<endl;
    	continue;
	}
	if(n==3){
		cout<<3<<endl;
		continue;
	}
    for(int i=1;i<=n;i++){
    	result=0;
    	sum=0;
    	for(int j=i;j<=n;j++){
    		sum+=i;
    		result++;
		}
		if(sum%2==0){
			cout<<result<<endl;
			break;
			
		}
	}
		}
	}

