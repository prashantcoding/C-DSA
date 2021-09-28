#include<iostream>
#include<vector>
#define llt long long int
using namespace std;
int main(){
	llt t;
	cin>>t;
	
	vector<llt> ans;
	while(t--){
		llt l,r;
		cin>>l>>r;
		int max=0;
		if(l<=(r/2)){
			max=r%((r/2)+1);
		}
		else if (l==r){
			max=0;
		}
		else{
			max=r-l;
		}
			ans.push_back(max);
		
	}
	
	

	for(llt i=0;i<ans.size();i++){
		cout<<ans[i]<<endl;
	}
}
	
