#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		
		int n,m;
		cin>>n>>m;
		int arr[n][m];
		for(int i=0;i<n;i++){
			for(int j=i;j<m;j++){
				cin>>arr[i][j];
			}
		}
		unordered_map<int,int> umap;
		cout<<"hii\n";
			for(int i=0;i<n;i++){
			for(int j=i;j<m;j++){
			if (umap.find(arr[i][j]) == umap.end())
        {
            umap.insert(make_pair(arr[i][j], 1));
        }
 
        // Else update the frequency
        else
        {
            umap[arr[i][j]]++;
        }
  	  }
		
    }
}
}
    
