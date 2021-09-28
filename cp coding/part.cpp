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

