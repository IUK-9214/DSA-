#include<iostream>
using namespace std;

int main() {
    struct s {
        int data;
        s* link;
    };
    // Create variables of structure data type
    s* data1 = new s;
    s* data2 = new s;
    s* data3 = new s;
    s*extra=new s; 
    s*extra2=new s; 
    s*extra3=new s; 
    s*extra4=new s; 
    s*extra5=new s; 
    // Assign values
    data1->data = 1;
    data2->data = 2;
    data3->data = 3;
    extra->data=7;
    extra2->data=8;
    extra3->data=44;
    extra4->data=6;
    extra5->data=16;
    // Link the variables with the next variable
    data1->link = data2;
    data2->link = data3;
    data3->link = extra;
    extra->link=extra2;
    extra2->link=extra3;
    extra3->link=extra4;
    extra4->link=extra5;
    extra5->link=nullptr;
    // Display
    s* current = data1; 
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->link;
    }
cout<<endl;
    s * start=data1;
    s* newnode=new s;
    if (start==nullptr){
    cout<<"after adding the value at the start of the link if it is emptty "<<endl;
    start=newnode;
    newnode->data=3;
    newnode->link=nullptr;
    }
    else {
        s*temp =start;
        while (temp->link!=nullptr){
            temp=temp->link;
        }
        s* newest=new s;
        newest->data=4;
        temp->link=newest;
        newest->link=nullptr;
    }
    
    s * here=data1;
    int l=0;
    while(here!=nullptr){
        l+=1;
        cout<<here->data<<" ";
        here=here->link;
    }
    int mid=l/2;
    s*leg=data1;
    int c=0;
    while(leg!=nullptr){
if (c==mid-1){
    leg->link=leg->link->link;
}
c+=1;
leg=leg->link;
 
    }
    cout<<endl;
    
    s* startup=data1;
    while(startup!=nullptr){
        cout<<startup->data<<" ";
        startup=startup->link;
    }
    cout<<endl;
int searching=44;
int loc=-1;
    s* search =data1;
    while(search!=nullptr){
        loc+=1;
        if(search->data==searching){
            cout<<"element "<<search->data<<" found at "<<loc<<endl;
            break;
        }
        search=search->link;
    }
    return 0;
}
