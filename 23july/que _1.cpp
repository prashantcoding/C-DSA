#include<iostream>
using namespace std;

	class A{
		public:
		int a;
		void display(){
			cout<<"a value"<<a;
		}	
	};
	class classb:public A{
		public:
		classb(int b){
			a=b;
		}
		
	};
	int main(){
		classb obj1(5);
		
		obj1.display();
	}
	
//B will need a construtor to access the value of the A data members other B class is not usefull 
//constructor is needed to intialize value of object of b 
