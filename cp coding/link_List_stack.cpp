#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    if (a == 0)
       return b;
    if (b == 0)
       return a;
  
    // base case
    if (a == b)
        return a;
  
    // a is greater
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);

}
void print(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}


int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,d;
	    cin>>n>>d;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    int g=gcd(n,d);
	    for(int q=0;q<=g;q++){
	    	cout<<"hii";
	        int i=0;
	        int temp=arr[0];
	        for(i=0;i<n;i=i+d){
	        	cout<<"hii";
	            arr[i]=arr[i+d];
	            cout<<arr[i]<<endl;
	            }
	            arr[i-d]=temp;
	       print(arr,5);     
	    }
	    
	    
		  
}

}
