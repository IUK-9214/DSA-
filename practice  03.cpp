#include<iostream>
using namespace std;
int main (){
	int N;
int num[N];

cout<<"enter teh size of the array "<<endl;
cin>>N;
cout<<"enter teh element of the array"<<endl;
for(int i=0;i<N;i++){
cout<<"ENte rthe number "<<i+1<<": "<<endl;
cin>>num[i];
}
cout<<"yuor array berfore the deletion of any elemnt"<<endl;
for(int j=0;j<N;j++){
	cout<<num[j]<<endl;
}
int index;
cout<<"enter the index number which you want to remove"<<endl;
cin>>index;

for(int h=N;h>index;h--){
num[h-1]=num[h];
	
}
N--;
	cout<<"Ypur array after the deletiion of the number"<<endl;
	for(int g=0;g<N;g++){
		cout<<num[g]<<" ";
	}
	return 0;
	
}

