#include<iostream>
using namespace std;
class oop{
    public:
    int x;
    public:
    void myf(int a ){
cout<<"the number is "<<a<<endl;
    }
};
int main (){
oop i;

cout<<"enter the number "<<endl;
cin>>i.x;
i.myf(i.x);
}