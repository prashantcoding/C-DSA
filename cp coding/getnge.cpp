//Get the next greater Elemnt 
/*ALgorithm
Push the first element to stack.
Pick rest of the elements one by one and follow the following steps in loop. 
Mark the current element as next.
If stack is not empty, compare top element of stack with next.
If next is greater than the top element, Pop element from stack. next is the next greater element for the popped element.
Keep popping from the stack while the popped element is smaller than next. next becomes the next greater element for all such popped elements.
Finally, push the next in the stack.
After the loop in step 2 is over, pop all the elements from the stack and print -1 as the next element for them.*/
#include<iostream>
#include<stack>
using namespace std;
void printnge(int arr[],int n){
	stack<int> st;
	st.push(arr[0]);
	for(int i=1;i<n;i++){
			if(st.empty()){
				st.push(arr[i]);
				continue;
			}
			while(st.empty()==false&&st.top()<arr[i]){
				cout<<st.top()<<"---->"<<arr[i]<<endl;
				st.pop();
			}
			st.push(arr[i]);
	}
	while(st.empty()==false){
		cout<<st.top()<<"--->"<<-1<<endl;
		st.pop();
	}
	
}
int main(){
	  int arr[] = { 11, 13, 21, 3 };
      int n = sizeof(arr) / sizeof(arr[0]);
      printnge(arr, n);
      return 0;
}
