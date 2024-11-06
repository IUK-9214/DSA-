#include<iostream>
using namespace std;
int main (){
	
	int numbers[6]={3,4,6,1,8,0};
	//we can use the selection sort array
	//by using the two loops and one if condition
int min,temp;
	for (int i=0;i<6;i++){
		min=i;
		for(int j=0;j<6;j++){
			if(numbers[j]<numbers[min]){
				min=j;
				
			}
			temp=numbers[min];
		numbers[min]=numbers[i];
		numbers[i]=temp;
		}	
	}
	
	cout<<"process is completed"<<endl;
	for(int k=0;k<6;k++){
		cout<<numbers[k]<<" ";
	}
	return 0;
}
