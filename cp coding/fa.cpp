#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int zeros=0;
	    while(n>0){
	        zeros+=n/5;
	        n=n/5;
	    }
	    cout<<zeros<<endl;
	}
	return 0;
}
