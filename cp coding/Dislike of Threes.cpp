#include<iostream>
#include<vector>

using namespace std;
vector<int> a;
int ans(int num){
	a.push_back(1);
	for(int i=1;i<1690;i++){
		if(i%3!=0&&i%10!=3)
	{a.push_back(i);}
	}
	return a.at(num);
}
int main(){
	
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<ans(n)<<endl;
	}
}
