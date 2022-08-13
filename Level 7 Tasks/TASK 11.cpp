#include<iostream>
using namespace std;
int main()
{
	system("color 0A");
	int size, sum=0;
	cout<<"ENTER THE SIZE OF MATRIX = ";
	cin>>size;
	int ar[size][size];
	cout<<"ENTER VALUES IN MATRIX "<<endl;
	for(int i=0; i<size; i++)
	{
		for(int j=0 ;j<size; j++)
		{
			cin>>ar[i][j];
		}
		cout<<"\n";
	}
	cout<<endl;
	cout<<"THE MATRIX VALUES ARE = "<<endl;
	for(int i=0; i<size; i++)
	{
		for(int j=0 ;j<size; j++)
		{
			cout<<ar[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"\n";
		cout<<"THE RIGHT DIAGONAL OF MATRIX IS = ";
		for(int i=0 ,j=size-1 ;j>=0 , i<size ;j-- ,i++)
		{
			cout<<ar[i][j]<<" ";
			sum+=ar[i][j];
		}
		cout<<"\nTHE SUM OF RIGHT DIAGONAL IS = "<<sum;
return 0;
}
