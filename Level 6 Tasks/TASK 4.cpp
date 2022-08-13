#include<iostream>
using namespace std;
int main()
{
	int num[10],num2[10],i,j;
	for(i=0;i<10;i++){
		cout<<"ENTER THE VALUE AT INDEX = "<<i<<" = ";
		cin>>num[i];
	}
	cout<<"************ OUTPUT *************"<<endl;
	
	for(j=0;j<10;j++){
		num2[j]=num[j];
		cout<<"THE INDEX VALUE OF "<<j<<" is "<<num2[j]<<endl;
	}
	return 0;
}
	
	

	
