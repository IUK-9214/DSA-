#include<iostream>
using namespace std;
class rectangle{
public:
int area(int l, int b){

   int  area_1=l*b;
    return area_1;
}

};

int main (){
rectangle r1;
int area1=r1.area(4,5);
cout<<"the area of the first rectangle is : "<<area1<<endl;
int area2=r1.area(5,8);
cout<<"the area of the second rectangle is : "<<area2<<endl;
    return 0;
}