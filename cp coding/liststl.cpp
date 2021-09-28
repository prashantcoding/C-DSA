//#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<iterator>
#include<list>
using namespace std;
void print(list <int> g){
	list<int> :: iterator it;
	for(it=g.begin();it!=g.end();++it){
		cout<<*it<<" ";
		
	}
	cout<<endl;
}
int main(){
	list<int> list1;
	for(int i=0;i<5;i++){
		list1.push_back(i);
	}
	print(list1);
	reverse(list1.begin(),list1.end());
	print(list1);
	list1.sort();
	print(list1);
	list1.push_front(5);
	print(list1);
	}
