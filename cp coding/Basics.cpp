//Algorithms
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
	//sorting in a particular order
	struct Interval{
		int start,end;
		};
	bool compareInterval(Interval il,Interval i2){
		return (il.start<i2.start);
		}
	int main(){
		vector<Interval> v{{6,8},{1,9},{2,4},{4,7}};
		sort(v.begin(),v.end(),compareInterval);
		for(auto x:v){
			cout<<"["<<x.start<<" ,"<<x.end<<" ]";
		}		
	}
		
		
