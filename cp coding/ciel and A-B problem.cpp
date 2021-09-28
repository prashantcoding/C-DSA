#include<iostream>
#include<stack>
#include<vector>
#include<string>
using namespace std;
int main(){
	int t;
	cin>>t;
	vector<string> a;
	while(t--){
		
		int N,D,H;
		cin>>N>>D>>H;
		int arr[N];
		for(int i=0;i<N;i++){
			cin>>arr[i];
		}
		stack<int> st;
		int ans=0;
		st.push(arr[0]);
		if(st.top()>H){
			ans=1;
			goto end;
		}
		for(int i=1;i<N;i++){
			int c=arr[i];
			if(arr[i]>0){
				int c=st.top();
				st.pop();
				c=c+arr[i];
				st.push(c);
				
			}
			else if (arr[i]==0&&st.top()>D){
				int c=st.top();
				st.pop();
				c=c-D;
				st.push(c);
			
			}
			else if(arr[i]==0&&st.top()<D){
				int c=st.top();
				st.pop();
				st.push(0);
				
			}
			if(st.top()>H){
					ans=1;
					goto end;
				}		
			}
			end:
				if(ans==1){
					string Q="Yes";
					a.push_back(Q);
				}
				else{
					string Q="NO";
					a.push_back(Q);
				}
			
		}
		int size=a.size();
		for(int i=0;i<size;i++){
			cout<<a[i]<<endl;
		}
		}
		


