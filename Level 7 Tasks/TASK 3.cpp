#include<iostream>
using namespace std;
int main()
{
	system("color 0A");
    int ROW;
	int COL;
	cout<<"ENTER NO OF ROWS = ";
	cin>>ROW;
	cout<<"ENTER NO OF COLOUMNS = ";
	cin>>COL;
	int M1[ROW][COL];
	int M2[ROW][COL];
	int M3[ROW][COL];
	cout<<"ENTER VALUE IN 1st MATRIX = "<<endl;
	for(int i=0; i<ROW; i++)
	{
		for(int j=0 ;j<COL; j++)
		{
			cin>>M1[i][j];
		}
		cout<<endl;
	}
	cout<<"ENTER VALUE IN 2nd MATRIX = "<<endl;
	for(int i=0; i<ROW; i++)
	{
		for(int j=0 ;j<COL; j++)
		{
			cin>>M2[i][j];
		}
		cout<<endl;
	}
	cout<<"*****************OUTPUT*****************"<<endl;
	cout<<"THE 1st MATRIX VALUES ARE = "<<endl;
	for(int i=0; i<ROW; i++)
	{
		for(int j=0 ;j<COL; j++)
		{
			cout<<M1[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"\n";
	cout<<"THE 2nd MATRIX VALUES ARE = "<<endl;
	for(int i=0; i<ROW; i++)
	{
		for(int j=0 ;j<COL; j++)
		{
			cout<<M2[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	cout<<"THE SUM OF 1st & 2nd MATRIX ARE = "<<endl;
	for(int i=0; i<ROW; i++)
	{
		for(int j=0 ;j<COL; j++)
		{
			M3[i][j]=M1[i][j]+M2[i][j];
			cout<<M3[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
	
}
