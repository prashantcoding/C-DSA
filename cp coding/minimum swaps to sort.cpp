#include<iostream>
using namespace std;
int main(){
	int n=5;
	int nums[]={10,19,6,3,5};
	int swap=0;
	for(int i=0;i<n-1;i++){
		if(nums[i]>nums[i+1]){
			swap++;
		}
	}
	cout<<swap;
}
