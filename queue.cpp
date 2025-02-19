#include<iostream>
#include<queue>

using namespace std;

int main (){

    queue<int>q;
    queue<int>temp;

    temp.push(0);

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);

    while(!q.empty()){
        temp.push(q.front());
        q.pop();
    }

    q=temp;

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }

    return 0;

}