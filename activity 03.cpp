#include<iostream>
#include<cmath>
using namespace std;
class activity{
public:
int a,b;
    activity(){
        a=128;
        b=4;
    }
 void square(){
    cout<<"the square root of a : 128 = "<< sqrt(a)<<endl;
    cout<<"the square root of b : 4 = "<< sqrt(b)<<endl;
 }
};
int main (){
activity y;
y.square();
   return 0; 
}