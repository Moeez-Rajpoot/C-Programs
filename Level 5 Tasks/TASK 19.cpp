#include<iostream>
using namespace std;

int main()
{
	int i,n;
	float sum=0;

	cout<<"Enter the value of n ";
	cin>>n;

	for(i=1;i<=n;i++)
		sum= sum+1.0/i;

	cout<<"Sum : "<<sum;

	
	return 0;
}
