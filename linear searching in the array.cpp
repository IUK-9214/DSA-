#include<iostream>
using namespace std;
int main(){
	int array[6]={1,23,4,5,3,6},loc;
	int se=23;
	for (int i=0;i<6;i++){
		if (array[i]==se){
			loc=i;
		}

	}
	cout<<"the location of the element in the array : "<<loc<<endl;
	cout<<"the number is : "<<array[loc]<<endl;
	
	return 0;
}
