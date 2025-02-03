#include<iostream>
#include<queue>
using namespace std;
int main (){
queue<int> a;
if(a.empty()){
    cout<<"queue is empty happy now "<<endl;
    cout<<"the current size is "<<a.size()<<endl;
}
int num;
for (int i = 0;i<5;i++){
    cin>>num;
    a.push(num);
}
if(!a.empty()){
    cout<<"the queue is full now "<<endl;
    cout<<"the size of queue is "<<a.size()<<endl;
}
while (!a.empty()){
    cout<<"the elemnts is "<<endl;
    cout<<a.front()<<endl;
    a.pop();
}
cout<<"thank you dear";

return 0;
}