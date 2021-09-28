#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
int main(){
	unordered_map <int,int>hm;
	int n = 5;
	int arr[]={4,0,2,1,3};
	for(int i=0;i<n;i++){
		int c=arr[arr[i]];
		hm.insert(make_pair(i,c));
	}
	for(int i=0;i<n;i++){
		arr[i]=hm[i];
	}
	
	
	
	
}

