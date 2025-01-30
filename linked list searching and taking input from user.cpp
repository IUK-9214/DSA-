#include <iostream>
using namespace std;
int main(){
struct list{
	int data;
	list*link;
};	
list*first=new list;
list*sec=new list;
list*third=new list;
list*fourth=new list;

first->link=sec;
sec->link=third;
third->link=fourth;
fourth->link=NULL;

list*current=new list;

while(current!=NULL){
	cout<<"enter the number : ";
	cin>>current->data;
	current=current->link;
					
}
list*atreator=new list;
atreator->link=first;
cout<<"the items of the list is : "<<endl;
while(atreator!=NULL){
	cout<<atreator->data;
	atreator=atreator->link;
}
return 0;
}
