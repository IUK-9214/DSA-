#include <iostream>
using namespace std;
int main( ) 
{
int a[6]={6,8,9,7,5,4}, n=6 ,se;
int loc=-1,i=0;

se=7;
while(i<n )
{
i++;
if( a[i] == se)
{
loc=i;
}
}
cout<<"item found at location"<<loc;
	
	return 0;
}
