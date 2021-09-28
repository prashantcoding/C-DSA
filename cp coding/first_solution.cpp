#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
    	int A,B,A1,B1,A2,B2;
    	cin>>A>>B>>A1>>B1>>A2>>B2;
    	vector<pair<int,int>> a;
    	a.push_back(make_pair(A,B));
    	a.push_back(make_pair(A1,B1));
    	a.push_back(make_pair(A2,B2));
    	
    	if(a[1].first==a[0].first&&a[1].second==a[0].second||a[1].first==a[0].second&&a[1].second==a[0].first){
    		cout<<1<<endl;
		}
		else if(a[2].first==a[0].first&&a[2].second==a[0].second||a[2].first==a[0].second&&a[2].second==a[0].first){
			cout<<2<<endl;
		}
		else{
			cout<<0<<endl;
		}
	}
    return 0;
}
