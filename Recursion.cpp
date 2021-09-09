
//fibocinni series using recursion
#include<iostream>
using namespace std;

int fib(int n){
	if(n==0){
		return 0;
	}
	if(n==1){
		return 1;
	}
	else{
		return (fib(n-1)+fib(n-2));
	}
}
int main(){
	int a=6;
	for(int i=0;i<a;i++){
		cout<<fib(i)<<" ";
	}
}
//factorial using recursion
#include<iostream>
using namespace std;
int fact(int a){
	if(a==1){
		return 1;
	}
	return a*fact(a-1);
}
int main(){
	int num=5;
	cout<<fact(num);
}
// C++ program to print all
// possible strings of length k
#include <bits/stdc++.h>
using namespace std;
	

// The main recursive method
// to print all possible
// strings of length k
void printAllKLengthRec(char set[], string prefix,
									int n, int k)
{
	
	// Base case: k is 0,
	// print prefix
	if (k == 0)
	{
		cout << (prefix) << endl;
		return;
	}

	// One by one add all characters
	// from set and recursively
	// call for k equals to k-1
	for (int i = 0; i < n; i++)
	{
		string newPrefix;
		
		// Next character of input added
		newPrefix = prefix + set[i];
		 cout<<newPrefix<<endl;
		// k is decreased, because
		// we have added a new character
		printAllKLengthRec(set, newPrefix, n, k - 1);
	}

}

void printAllKLength(char set[], int k,int n)
{
	printAllKLengthRec(set, "", n, k);
}

// Driver Code
int main()
{
	
	cout << "First Test" << endl;
	char set1[] = {'a', 'b'};
	int k = 3;
	printAllKLength(set1, k, 2);
	
	cout << "Second Test\n";
	char set2[] = {'a', 'b', 'c', 'd'};
	k = 1;
	printAllKLength(set2, k, 4);
}

// This code is contributed
// by Mohit kumar
