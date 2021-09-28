#include<iostream>
using namespace std;
int i=1;
void Count(int x, int  y) {
    if (y != 1){
        if (x != 1) {
            i++;
            Count(x/2, y);
        }
        else {
            y = y-1;
            Count(1024, y);
        }
    }
}
int main(){
	Count(1024,1024);
	cout<<i<<endl;
}
