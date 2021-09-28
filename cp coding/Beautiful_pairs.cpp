#include<iostream>
#include <bits/stdc++.h>

#define llt long long int
using namespace std;
int fact(int n)
{
   
    return (n==1 || n==0) ? 1: n * fact(n - 1);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
    	llt n;
    	cin>>n;
    	llt arr[n];
    	for(int i=1;i<=n;i++){
    		cin>>arr[i];
		}
    	llt a=fact(n)/fact(n-2);
    	a=a+n;sort(arr,arr+n);
    	int sim=0;
    	for(int i=1;i<n;){
    		int key=arr[i];
    		
    		while(arr[i]==key&&i<n){
    			sim+=1;
    			i++;
			}
			
		}
		
		cout<<a<<endl;
	}
    
}
