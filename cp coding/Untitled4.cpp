#include<iostream>
#include<vector>
#include<algorithm>
#define llt long long int
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		llt n;
		cin>>n;
		vector<llt> alice;
		vector<llt> bob;
		for(llt i=0;i<n;i++){
			int c;
			cin>>c;
			alice.push_back(c);
		}
		for(llt i=0;i<n-1;i++){
			llt c;
			cin>>c;
			bob.push_back(c);
		}
		llt a=*max_element(alice.begin(),alice.end());
		llt b=*max_element(bob.begin(),bob.end());
		if(b>a){
			cout<<b-a<<endl;
		}
		else{
			cout<<a-b<<endl;
		}
		
	}
}
