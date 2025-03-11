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
int x ;

}; 
int main()
{
oop x1;//classs name and space then declare the name of the object
x1.x=2;
cout<<x1.x;
    return 0;
}