#include<iostream>
using namespace std;
class Marks{

public:
float mark_1,mark_2,mark_3;
float sum;
float average;

public:
void input(){
cout<<"Enter the marks 1 : ";
cin>>mark_1;
cout<<"Enter the marks 2 : ";
cin>>mark_2;
cout<<"Enter the marks 3 : ";
cin>>mark_3;
}

void sum_of_marks(){
    sum= mark_1+mark_2+mark_3;
    cout<<"The sum of the marks is : "<<sum<<endl;;
}

void Avg(){
       average=sum/3;
       cout<<"The average of the number is : "<<average<<endl; 
}

};
int main (){
Marks student;
student.input();
student.sum_of_marks();
student.Avg();
}