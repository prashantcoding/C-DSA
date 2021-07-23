//factorial usig recursion 
//Recursion means calling of function inside a function .
//IN this the function fact is calling itself inside it 
#include<iostream>
using namespace std;
int fact(int n){
	if(n==1){
		return 1;
	}
	else if(n==2){
		return 2;
	}
	else{
		return n*fact(n-1);//recursive call
	}
}
int main(){
	int n;
	cin>>n;
	cout<<fact(n);
}

