//cosntructor are the special member function
//no data type 
//there is no return type while function have and also we collect the return type in main
//always public 
#include<iostream>
using namespace std;
class   cons{
public:
int num;
char ch;
    cons(){
        //when there is no data in the constructor or it is not declare 
        //this type of the constructor is created on backend;
        num=100;
        ch='A';
    }
void display (){
    cout<<num<<endl;
    cout<<ch;
}
};

int main (){
cons ob;
ob.display();
    return 0;
}