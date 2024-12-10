#include<iostream>
#include<stack>
using namespace std;
int stacks[100],n=100,top=-1;
void push(int x){
	if(top>n-1){
	cout<<"stack is over flow "<<endl;	
	}
	else{
		top=top+1;
		stacks[top]=x;
	}}
void pop(){
	if (top<0){
		cout<<"stack under flow"<<endl;
	}
	else{
		cout<<"the pop element is : "<<stacks[top]<<endl;
		top--;
	}
}
void topof(){
	if(top<0 ||top>n){
		
		cout<<"stack is under flow or over flow "<<endl;
	}
	else{
		cout<<"the top is "<<stacks[top]<<" "<<endl;
	}
}
void display(){
	cout<<"your stack elments are "<<endl;
	for(int i=top;i>=0;i--){
		cout<<stacks[i]<<"  "; 
	}
}
int main (){
	int ch,num;
	cout<<"1) for push the  element"<<endl;
		cout<<"2) for pop the element"<<endl;
		cout<<"3) for top of the element"<<endl;
		cout<<"4) for display the element"<<endl;
		cout<<"5) for EXIT"<<endl;
		
	do{
		cout<<"enter the choice "<<endl;
		cin>>ch; 
		switch(ch){
			case 1:{
				cout<<"enter the number ";
				cin>>num;
				push(num);
				cout<<"number is add"<<endl;
				break;
			}
			case 2:{
				pop();
				break;
			}	
			case 3:{
				topof();
				break;
			}	
			case 4:{
				display();
				break;}
			case 5:{
				cout<<"EXIT"<<endl;
				break;
			}
			default : {
				cout<<"invalide optn"<<endl;
				break;
			}
				
		}
		}
		while(ch!=5);
	return 0;
}



