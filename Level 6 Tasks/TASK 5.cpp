#include<iostream>
using namespace std;
int main()
{
	int num[10],num2[10],i;
	double avg, sum=0;
	for(i=0;i<10;i++){
		cout<<"ENTER THE VALUE AT INDEX = "<<i<<" = ";
		cin>>num[i];
		sum=sum+num[i];
	    avg=sum/10;
	}
	cout<<"THE AVERAGE IS = "<<avg;
	return 0;
}
	
