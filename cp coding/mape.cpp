// CPP program to traverse a map using iterators
#include<iostream>
#include<iterator>
#include<map>
using namespace std;
//insert a element in the map
int main(){
map<int ,int > m;
m.insert({3,4});//first method to insert a number in map 
m.insert(pair<int,int> (1,40));//second method to insert a number in map

//printing map 
map<int,int>::iterator it;
for(it=m.begin();it!=m.end();++it){
	cout<<it->first<<endl;
	cout<<it->second<<endl;
}
//Remove the elements upto certain number
m.erase(m.begin(),m.find(3));
for(it=m.begin();it!=m.end();++it){
	cout<<it->first<<endl;
	cout<<it->second<<endl;
}
//map_count
if(m.count(3)){
	cout<<"value is found";
}

}

