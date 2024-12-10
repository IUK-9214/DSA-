#include<iostream>
using namespace std;
int main (){
	
int N ;
cout<<"enter teh size of teh array"<<endl;
cin>>N;
int array[N];
for(int i=0;i<N;i++){
	cout<<"enter teh element "<<i+1<<" ";
	cin>>array[i];
}
int index=3;
for (int i=N;i>index;i--){
	array[i]=array[i-1];
}
array[index]=7;
N++;
for(int i=0;i<N;i++){
	cout<<array[i]<<" ";
}

	return 0;
}
