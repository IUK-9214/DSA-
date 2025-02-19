#include<iostream>
#include<queue>
using namespace std;
int main(){
queue<int>q;
int max=5;
int rear=-1;
for (int i =0;i<max;i++){
    int x;
    cout<<"enter the number "<<endl;
    cin>>x;
    q.push(x);
    rear++;
}
if (max-1==rear){
    cout<<"full";
}
else{
    cout<<"not full";
}

}