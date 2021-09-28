#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
    	string s;
    	cin>>s;
    	stack<char> st;
    	if(s.size()<=3){
    		cout<<"Error"<<endl;
    		continue;
		}
    	if(s[0]!='<'&&s[1]!='/'){
    		cout<<"Error"<<endl;
    		continue;
    	}
    	st.push(s[0]);
    	st.push(s[1]);
    	int ans=1;
    	for(int i=2;s[i]!='\0';i++){
    		if(s[i]=='/'){
    			if(st.top()!='<');
    			{ans=0;
    			break;}
    			st.pop();
			}
			if(s[i]=='<'){
				ans=0;
				break;
			}
			if(s[i]=='>'){
				if(st.top()!='/'){
				ans=0;
				break;
				}
				st.pop();
				
			}
			else{
				if(s[i]>='A'&&s[i]<='Z'){
					ans=0;
					break;
				}
				
			}
		}
		if(ans==0){
			cout<<"Error"<<endl;
		}
		else{
			cout<<"Success"<<endl;
		}
}
   }
