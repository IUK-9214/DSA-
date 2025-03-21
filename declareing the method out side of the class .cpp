#include<iostream>
using namespace std;
class Rectangle {
public :
void area(float l,float w);
};
void Rectangle::area(float l, float w){
    float ar=l*w;
    cout<<"the area of the rectangle : "<<ar<<endl;
}


int main (){
    Rectangle ob;
ob.area(9,8);
    return 0;
}