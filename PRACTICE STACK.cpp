#include<iostream>
#include<stack>
using namespace std;
int main(){
	//we will create a stack l
	 //top ()
	 //pop()
	 //push()
	 //isfull()
	 stack<int>a;
	 a.push(3);
	 a.push(6);
	 a.push(8);
	 a.push(6);
//	 cout<<a.top();
//	 if(!a.empty()){
//	 	a.pop();
//	 	cout<<" "<<a.top();
//	 }
	 while(!a.empty()){
	 	cout<<a.top()<<" ";
	 	a.pop();
	 	
	 }
	
	return 0;
}
