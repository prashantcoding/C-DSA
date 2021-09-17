#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long arr[12];
		unordered_map<long long,long long> umap;
		for(int i=0;i<12;i++){
			cin>>arr[i];
		}
		for(int i=0;i<12;i++){
			umap[arr[i]]++;
		}
		int m=umap[arr[1]];
		int g=0;
		for(auto x:umap){
			if(x.second!=m){
				 g=1;
				break;
			}
		}
		if(g==1){
			cout<<"no"<<endl;
		}
		else{
			cout<<"yes"<<endl;
		}
	}
}
