
//fibocinni series using recursion
#include<iostream>
using namespace std;

int fib(int n){
	if(n==0){
		return 0;
	}
	if(n==1){
		return 1;
	}
	else{
		return (fib(n-1)+fib(n-2));
	}
}
int main(){
	int a=6;
	for(int i=0;i<a;i++){
		cout<<fib(i)<<" ";
	}
}
