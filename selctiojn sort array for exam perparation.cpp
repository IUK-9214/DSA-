#include<iostream>
using namespace std;
int main (){
	int pm;//postion of minmum number in the array
	int N;//size of the array
	int temp;//variable for the storing the value during the swaping
	cout<<"enter the size of teh array "<<endl;
	cin>>N;
	int array[N];
	cout<<"enter the element of the array"<<endl;
	for (int i=0;i<N;i++){
		cout<<"element number : "<<i+1<<" ";
		cin>>array[i];
		
	}
	cout<<"array before the selection sort array "<<endl;
	for (int i=0;i<N;i++){
		cout<<array[i]<<" ";
	}
	//secltion sorting array
	for(int i =0;i<N;i++){
		pm=i;
		for(int j=i;j<N;j++){
			if(array[i]>array[j]){
				pm=j;
			}
		}
		temp=array[pm];
		array[pm]=array[i];
		array[i]=temp;
	}
	cout<<endl<<"array after selction sort "<<endl;
	for (int i=0;i<N;i++){
		cout<<array[i]<<" ";
	}
	
	return 0;
}
