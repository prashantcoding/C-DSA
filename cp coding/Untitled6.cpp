#include<iostream>
#define llt long long int
using namespace std;
int main()
{		llt arr[]={1,1,1,2,3};
	llt max=0;
	llt freq=0;
	llt element=0;
		for(llt i=0;i<5;){
			llt key=arr[i];
			if(arr[i]==arr[i+1])
			{while(arr[i]==key){
				++i;
				freq+=1;
			}
			if(freq>max){
				max=freq;
				cout<<arr[i];
			}}
			else{
				i++;
			}	
		}
		cout<<element;
}
