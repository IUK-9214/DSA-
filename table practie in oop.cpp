#include<iostream>
#include<iostream>
using namespace std;
class table{
public :
int a;
table(){
a=2;
}
void dipaly_table(){
    for (int i=1; i<=10;i++){
        cout<<a<<" * "<<i<<" = "<<2*i<<endl;
    }
}
};
int main (){
table  b;
b.dipaly_table();
    return 0;
}