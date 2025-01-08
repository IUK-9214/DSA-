#include<iostream>
using namespace std;
struct employees{
	string name;
	int age;
	int salary;
	employees*next;
};
int main(){
	//creating nodes
	employees*name1=new employees;
	employees*age1=new employees;
	employees*salary1=new employees;
	employees*name2=new employees;
	employees*age2=new employees;
	employees*salary2=new employees;
	employees*name3=new employees;
	employees*age3=new employees;
	employees*salary3=new employees;
	//names are linked
    name1->next=name2;
	name2->next=name3;
	name3->next=NULL;
	//ages are linked
	age1->next=age2;
	age2->next=age3;
	age3->next=NULL;
	//salary are linked
	salary1->next=salary2;
	salary2->next=salary3;
	salary3->next=NULL;
	
	int i=1;
	employees*current=name1;
	while(current!=NULL){
		cout<<"Enter your name : "<<i<<endl;
		cin>>current->name;
		cout<<"Enter your age : "<<endl;
		cin>>current->name;
		cout<<"Enter your salary : "<<endl;
		cin>>current->name;
		current=current->next;
		
	}
		int z=1;
	current=name1;
	while(current!=NULL){
		cout<<" your name : "<<z<<endl;
		cout<<current->name;
		cout<<" your age : "<<endl;
		cout<<current->name;
		cout<<" your salary : "<<endl;
		cout<<current->name;
		current=current->next;
		
	}
	
	return 0;
}
