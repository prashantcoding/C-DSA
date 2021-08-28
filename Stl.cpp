//Algorithm
//Sorting Vector
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
		vector<int> arr;
		for(int i=5;i>0;i--){
			arr.push_back(i);
		}
		for(auto x:arr){
			cout<<x<<" ";
		}
		cout<<endl;
		sort(arr.begin(),arr.end());
		for(int i=0;i<5;i++){
			cout<<arr[i]<<" ";
		}
		cout<<endl;
		////sorting in the descending order
		sort(arr.begin(),arr.end(),greater<int>());
		for(auto x:arr){
			cout<<x<<" ";
		}
		
		
}
//////////////////////////////////////////////////////////////////////////////////
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
