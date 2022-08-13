#include<iostream>
using namespace std;
int main()
{
	int num=1,pro=1,sum=0;
	double avg;
	while(num<=10){
		pro=pro*num;
		sum=sum+num;
		num++;
		avg=(sum/10);
	}
	cout<<"THE PRODUCT OF FIRST 10 NO IS = "<<pro<<endl;
	cout<<"THE SUM OF FIRST 10 NO IS = "<<sum<<endl;
	cout<<"THE AVERAGE IS = "<<avg;
	return 0;
	
}
