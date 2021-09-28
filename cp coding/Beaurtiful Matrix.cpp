#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
	int q=0,c=0;
	int arr[5][5];
	for(int i=1;i<=5;i++){
		for(int j=1;j<=5;j++){
			cin>>arr[i][j];
			if(arr[i][j]==1)
			{
				q=i;
				c=j;
				
			}
			
		}
	}

		cout<<q<<c;
	int col_step=abs(c-3);
	int row_step=abs(q-3);
	cout<<col_step+row_step;
}
