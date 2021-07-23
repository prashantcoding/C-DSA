#include<iostream>
using namespace std;
class abstract_base{
	public:
	double one_val;
	double second_val;
	int get_data(){
		int x,y;
		cout<<"enter the first vlaue";
	cin>>x;
	cout<<"enter the second value";
	cin>>y;
		one_val=x;
	
		second_val=y;
	}
	virtual int display_area(){
		cout<<"area is "<<one_val*second_val;	
	}
};
class triangle:public abstract_base{
	public:
	virtual int display_area(){
		cout<<"one value"<<one_val;
	
		cout<<"area of triangle "<<1/2*one_val*second_val<<endl;
	}
};
class rectangle:public abstract_base{
	public:
	virtual int display_area(){
		cout<<"area of rectangle"<<one_val*second_val<<endl;
	}
};
int main(){
	int x,y;
	triangle obj1;
	rectangle obj2;
obj1.get_data();
	cout<<"\n";
	obj1.display_area();  
	obj2.get_data();
	obj2.display_area();  
}
