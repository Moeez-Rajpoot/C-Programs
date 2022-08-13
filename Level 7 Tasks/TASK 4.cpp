#include<iostream>
using namespace std;
int main()
{
	system("color 0A");
    int size=3;
	int M1[size][size];
	int M2[size][size];
	int PRO[size][size];
	cout<<"ENTER VALUE IN 1st (3x3) MATRIX = "<<endl;
	for(int i=0; i<size; i++)
	{
		for(int j=0 ;j<size; j++)
		{
			cin>>M1[i][j];
		}
		cout<<"\n";
	}
	cout<<"ENTER VALUE IN 2nd (3x3) MATRIX = "<<endl;
	for(int i=0; i<size; i++)
	{
		for(int j=0 ;j<size; j++)
		{
			cin>>M2[i][j];
		}
		cout<<"\n";
	}
	cout<<"*****************OUTPUT*****************"<<endl;
	cout<<"THE 1st MATRIX VALUES ARE = "<<endl;
	for(int i=0; i<size; i++)
	{
		for(int j=0 ;j<size; j++)
		{
			cout<<M1[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"\n";
	cout<<"THE 2nd MATRIX VALUES ARE = "<<endl;
	for(int i=0; i<size; i++)
	{
		for(int j=0 ;j<size; j++)
		{
			cout<<M2[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	cout<<"THE PRODUCT OF 1st & 2nd MATRIX ARE = "<<endl;
	for(int i=0; i<size; i++)
	{
		for(int j=0 ;j<size; j++)
		{
			PRO[i][j]=M1[i][j]*M2[i][j];
			cout<<PRO[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
	
}
