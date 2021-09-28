#include<iostream>
#define max 100
using namespace std;
class queue{
	public:
	int arr[max];
	int front;
	int rear;
	public:
	queue(){
	 front=-1;
	 rear=-1;
	}
	bool isfull();
	bool isempty();
	void push(int x);
	int pop();
	
};
bool queue::isempty(){
	if(front==-1||front>rear)
		return true;
	return false;
}
bool queue::isfull(){
	if(rear==max)
		return true;
	return false;
}
void queue::push(int x){
	if(isfull()==true){
		cout<<"queue Overflow"<<endl;
		return;
	}
	if(front==-1){
		arr[++front]=x;
		rear++;
		return;
	}
	arr[++rear]=x;
	
	
}
int queue::pop(){
	if(isempty()==true){
		cout<<"queue Underflow"<<endl;
	}
	int x=arr[front++];
	cout<<"poppped out "<<x<<endl;
	return 0;
}
int main(){
	queue qu;
	qu.push(5);
	qu.push(15);
	qu.push(20);
	qu.pop();
	if(qu.isempty()==true){
		cout<<"queue empty";
	}
	else{
		cout<<"queue is not empty";
	}
	qu.pop();
	qu.pop();
}
