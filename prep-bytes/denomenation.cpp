#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
      int N;
      cin>>N;
      int notes=0;
      if(N>=1000){
        notes+=N/1000;
        N=N%1000;
      }
      if(N>=500){
        notes+=N/500;
        N=N%500;
      }
      if(N>=100){
        notes+=N/100;
        N=N%100;
      }
      if(N>=50){
        notes+=N/50;
        N=N%50;
      }
      if(N>=20){
        notes+=N/20;
        N=N%20;
      }
      if(N>=10){
        notes+=N/10;
        N=N%10;
      }
      if(N>=5){
        notes+=N/5;
        N=N%5;
      }
      if(N>=2){
        notes+=N/2;
        N=N%2;
      }
      if(N>=1){
        notes+=N/1;
      }
      cout<<notes<<endl;
      
    }
    
}
