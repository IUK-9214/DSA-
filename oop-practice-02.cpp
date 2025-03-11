#include<iostream>
using namespace std;
// //access specifier
// class oop{
// int x :=> by defualt in the class teh varible and the methods are private so it is neccssary to declare the access specifer
// public:
// //public access specfier the attribute and the methods can be use out side  and inside the class
// private:
// //can not be access out side of the class
// protected:
// //also they cannot be access however in inheritence
// }

class oop
{
public: 
string name ;
int age ;
string contact;

}; 
int main()
{
oop x1;//classs name and space then declare the name of the object
x1.name="ibad";
x1.age=20;
x1.contact="03411850048";
cout<<"name is : "<<x1.name<<endl<<" age : "<<x1.age<<endl<<" contact number : "<<x1.contact<<endl;
return 0;
}