#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

bool diffe(int a,int b){
	if(a%2==0&&b%2==0){
		return false;
	}
	if(a%2!=0&&b%2!=0){
		return false;
	}
	return true;
}

int main()
{
	int t;
	cin>>t;
	vector<int> ans;
	while(t--){
		
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		if(n==1){
			ans.push_back(0);
			continue;
		}
		int same=0;
		int diff=0;
		for(int i=0;i<n;i++){
			if(diffe(arr[i],arr[i+1])==true){
				same+=1;
			}
			else{
				diff+=1;
			}
		}
		if(same==0||diff==0){
			ans.push_back(-1);
		}
		else if(same==diff){
			ans.push_back(same);
		}
		else{
			ans.push_back(abs(same-diff));
		}	
	}
for(auto x:ans){
		cout<<x<<endl;
	}
	}
	

		
	
