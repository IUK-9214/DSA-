#include <iostream>
using namespace std;

struct node {
    string name;
    string age;
    node* next;
};

int main() {

    node* name1 = new node;
    node* name2 = new node;
    node* name3 = new node;

    
    name1->next = name2;
    name2->next = name3;
    name3->next = NULL;  

    node* current = name1;
    while (current != NULL) {  
        cout << "Enter your name: ";
        cin >> current->name;
        cout << "Enter your age: ";
        cin >> current->age;
        current = current->next;
    }

    node* ptr = name1;
    while (ptr != NULL) { 
        cout << ptr->name << " : " << ptr->age << endl;
        ptr = ptr->next;
    }
    string search;
    cout<<"enter the name of the person you want to search"<<endl;
    cin>>search;
    int i=1;
    bool found=false;
    current=name1;
    while(current!=NULL){
    	if(current->name==search){
    		cout<<"your person is numbner : "<<i<<": "<<endl;
    		cout<<"name : "<<current->name<<endl;
    		cout<<"age : "<<current->age<<endl;
    		found=true;
    		break;
		}
		current=current->next;
	i++;
	}


    return 0;
}

