//kadane Algorithm 
#include<iostream>
using namespace std;
int main(){
	int arr[]={-2,-3,4,-1,-2,1,5,-3};
	int n=7;
	int max_so_far=INT_MIN;
	int max_ending_here=0;
	for(int i=0;i<n;i++){
		max_ending_here=max_ending_here+arr[i];
		if(max_so_far<max_ending_here){
			max_so_far=max_ending_here;
		
		}
		if(max_ending_here<0){
			max_ending_here=0;
			
		}
	cout<<"max_so_Far"<<max_so_far<<endl;
	}
	cout<<max_so_far<<endl;
}
