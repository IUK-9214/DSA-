#include<iostream>
using namespace std;
int main(){
	
	//bubble sorting
	//for descending 
	//from largest to smallest
	int numbers[6];
	int first;
	cout<<"Enter the number which you want to store"<<endl;
		
	for(int i=0;i<6;i++){
		cout<<"Number "<<i+1<<": ";
		cin>>numbers[i];
		cout<<endl;
	}
	for(int j=0;j<6;j++){
		for(int h=0;h<5;h++){
			if(numbers[h]<numbers[h+1]){
				first=numbers[h];
				numbers[h]=numbers[h+1];	
				numbers[h+1]=first;
			}
		}
	}
	cout<<"bubble sorting  was completed"<<endl;
	cout<<"your array is "<<endl;
	for(int i=0;i<6;i++){
		cout<<numbers[i];
		cout<<" ";
	}
	
	return 0;
}
