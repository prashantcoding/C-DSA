# include<iostream>
#include<numeric>
using namespace std;
int mul(int a,int b){
	return a-b;
}
int main(){
		int sum=-;
		int arr[]={1,2,3,4,5};
		cout<<accumulate(arr,arr+5,sum,mul);
	
}
