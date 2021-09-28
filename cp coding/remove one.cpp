#include<bits/stdc++.h>
using namespace std;
#define lli long long int 
#define pb push_back
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<lli>a;
		vector<lli>b;
		unordered_set<int> s;
		lli x;
		for(int i=0;i<n;i++){
			cin>>x;
			a.pb(x);
			s.insert(x)
		}
		for(int i=0;i<n-1;i++{
			cin>>x;
			b.pb(x);
	}
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	lli ans=b[0]-a[1];
	for(auto i:b){
		if(s.count(i-ans)==0){
			ans=b[0]-a[0];
			break;
		}
	}
	if(ans<=0) ans=b[0]-a[0];
	cout<<ans<<'\n';
}
