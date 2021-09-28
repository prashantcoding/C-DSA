#include<iostream>
using namespace std;
int main(){
	string s;
	cin>>s;
	int upper=0;
	int lower=0;
	for(int i=0;s[i]!='\0';i++){
		char c=s[i];
		if(c>='a'&&c<='z'){
			lower+=1;
		}
		else{
			upper+=1;
		}
	}
	if(upper>lower){
	for(int i=0;s[i]!='\0';i++)
			{
			char c=s[i];
			if(c>='a'&&c<='z')
			s[i]=(char)toupper(c);
		}
	}
	else{
		for(int i=0;s[i]!='\0';i++)
			{
			char c=s[i];
			s[i]=(char)tolower(c);
		}
	}
	
	cout<<s;
			
			
	
}

		
	

