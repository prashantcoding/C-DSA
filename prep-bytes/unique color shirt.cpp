#include <bits/stdc++.h>
using namespace std;
#include<unordered_map> 
int main()
{	int n;
	cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    unordered_map<int,int> freq;
    for(int i=0;i<n;i++){
	   freq[arr[i]]++;
    }
    int count=0;
    for(auto x:freq){
      if(x.second==1){
      	count++;
	  }
    }
    cout<<count<<endl;
  
 
  
  return 0;
}
