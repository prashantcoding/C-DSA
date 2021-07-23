#include<iostream>
using namespace std;

class Complex{
	public:
	int real,imag;
		public:
			Complex(int r=0,int i=0){
				real=r;
				imag=i;
			}
	Complex operator +(Complex const &obj){
		Complex obj3;
		obj3.real=real+obj.real;
		obj3.imag=imag+obj.imag;
		return obj3;
	}
	void print(){
		cout<<real<<"+i"<<imag;
	}
	};

int main(){
	Complex obj1(1,2);
	Complex obj2(3,4);
	Complex c3=obj1+obj2;
	c3.print();
}
