#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
	unordered_map<int,int> hm;
	int arr[]={0,2,1,2,0};
	for(int i=0;i<5;i++){
		if(hm.find(arr[i])==hm.end()){
			hm.insert(make_pair(arr[i],1));}
		else{
			hm[arr[i]]++;
		}
		
		}
int j=0;
for(int i=0;i<5;){
		int c=hm.at(j);
		while(c!=0){
			arr[i]=j;
			c--;
			++i;}
		j++;
	}
}
	

