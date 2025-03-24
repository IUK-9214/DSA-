#include<iostream>
using namespace std;
class TV{
    public :
    string brandname,model, retailprice;
public:
void input_name();
void display();
};
void TV::input_name(){

    cout<<"enter the name of the brand : ";
    cin>>brandname;
    cout<<"enter the model name : ";
    cin>>model;
    cout<<"enter the retailprice ";
    cin>>retailprice;
}
void TV::display(){
    cout<<" name of the brand : "<<brandname<<endl;
    cout<<"model name : "<<model;
    cout<<" retailprice "<<retailprice;
}
int main (){
    TV ob;
    ob.input_name();
    ob.display();
    return 0;
}