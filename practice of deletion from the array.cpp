#include<iostream>
using namespace std;
int main (){
	//using the DSA concept
	//here we can create a program 
	//for deletion from the array
	int N,index;
int numb[N];
cout<<"Enter the size of the array"<<endl;
cin>>N;
cout<<"Enter the element of the array"<<endl;
for(int i=0;i<N;i++){
	cin>>numb[i];
}
cout<<"Your array elemnt are "<<endl;
for(int i=0;i<N;i++){
	cout<<numb[i]<<" ";
}
cout<<endl;
cout<<"enter the index number to delete the element from the array"<<endl;
cin>>index;

if (index>0||index<N){
	
	for(int j=index;j<=N;j++){
		numb[index]=numb[index+1];
	index++;
	}
	N--;
	cout<<"aftter deletion the element"<<endl;
	for(int j=0;j<N;j++){
		cout<<numb[j]<<" ";
		
	}
}
else{
	cout<<"invalide index"<<endl;
}


	
	return 0;
}
