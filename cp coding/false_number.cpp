#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  	int t;
  	cin>>t;
  	while(t--){
  		string A;
  		cin>>A;
  		
  		if(A[0]!='1'){
  			cout<<"1";
  			cout<<A<<endl;
		  }
		else{
		
			A[0]='0';
			cout<<"1";
			cout<<A<<endl;
		}
	  }
    return 0;
}
