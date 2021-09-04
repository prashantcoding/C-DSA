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
////////////////////////////Some Algor//////////////////////////////////////////
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void show(vector<int> ar){
	for(int i=0;i<ar.size();i++){
		cout<<ar[i]<<" ";
	}
	cout<<endl;
}

int main(){
	int n=5;
	vector<int> a;
	for(int i=0;i<n;i++){
		int c;
		cin>>c;
		a.push_back(c);
	}
	//sorting algorithm
	sort(a.begin(),a.end());
	//show algorithm
	show(a);
	//Binary search algorithm
	cout<<"\n"<<binary_search(a.begin(),a.end(),5);
	//reverse
	cout<<endl;
	reverse(a.begin(),a.end());
	show(a);
	//max element 
	cout<<*max_element(a.begin(),a.end());
	//min element
	cout<<*min_element(a.begin(),a.end());
	cout<<endl;
	//Accumulate
	int sum=0;
	sum=accumulate(a.begin(),a.end(),sum);
	cout<<"sum"<<sum<<endl;
	
	
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
////////////////////////////////////////////////////////////////////
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	vector<int> vect={2, 1, 5, 6, 8, 7};
	vector<int> dummy;
	vector<int> dummy2;
	int n = count_if (vect.begin(), vect.end(), [](int x)
    {
        return x%2==0;
         
    } );
    dummy.resize(n);
    dummy2.resize(vect.size()-n);
	partition_copy(vect.begin(),vect.end(),dummy.begin(),dummy2.begin(),[](int x){
		return x%2==0;
	});
	for(auto x:dummy){
		cout<<x<<" ";
	}
	cout<<endl;
	for(auto x:dummy2){
		cout<<x<<" ";
	}
}
