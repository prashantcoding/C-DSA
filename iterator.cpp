#include<iostream>
#include<iterator>
#include<vector>
using namespace std;
int main(){
	vector<int> ar;
	for(int i=0;i<5;i++){
		ar.push_back(i+1);	
	}
	vector<int>::iterator ptr;
	for(ptr=ar.begin();ptr<ar.end();ptr++){
		cout<<*ptr<<" ";
	}
}
//////////////////////////////////////
#include<iostream>
#include<iterator>
#include<vector>
using namespace std;
int main(){
	vector<int> ar;
	for(int i=0;i<5;i++){
		ar.push_back(i+1);	
	}
	vector<int>::iterator ptr=ar.begin();
	advance(ptr,3);
	cout<<*ptr;
	
}
/////////////////////////////////////
