#include<iostream>
#include<math.h>
#define llt long long int
using namespace std;
int main(){
	llt a=1;
	llt b=1000000;
	cout<< (floor(sqrt(b)) - ceil(sqrt(a)) + 1);
}
