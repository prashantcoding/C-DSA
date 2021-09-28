#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int c;
	c=sqrt(137);
	while(pow(c,2)<137){
		c=c+1;
	}
	for(int i=2;i<=c;i++){
		if(137%i==0){
			cout<<"not prime";
			break;
		}
	}
	
}
