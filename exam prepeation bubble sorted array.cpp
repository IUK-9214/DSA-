#include<iostream>
using namespace std;
int main (){
	
	int N,temp;

	cout<<"Enter the size of the array "<<endl;
	cin>>N;
		int array[N];
	cout<<"enter the element of the array "<<endl;
	for (int i =0;i<N;i++){
		cout<<"element number : "<<i+1<<" ";
		cin>>array[i];
		cout<<endl;
	}
	cout<<"element before sorted "<<endl;
	for (int i =0;i<N;i++){
		
		cout<<array[i]<<" ";
}
	
	
	for (int j=0;j<N;j++){
		
		for(int h=0;h<N-1;h++){
			if (array[h]>array[h+1]){
			temp=array[h];
			array[h]=array[h+1];
			array[h+1]=temp;	
			}
		}
	}
cout<<"your sorting is done"<<endl;
cout<<"array after the sorting"<<endl;
	for (int i =0;i<N;i++){
		
		cout<<array[i]<<" ";
}
}

