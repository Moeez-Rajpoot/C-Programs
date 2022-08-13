#include<iostream>
using namespace std;
int main()
{
	system("color 0A");
	const int ROW=2;
	const int COL=7;
	int temp[ROW][COL];
	cout<<"Enter all temperature for a week of first city and then second city. "<<endl;
	for(int i=0; i<ROW; i++)
	{
		for(int j=0 ;j<COL; j++){
			cout<<"CITY "<<i +1<<", DAY "<<j +1<<" : ";
			cin>>temp[i][j];
		}
		
	}
	cout<<"\n\n\n";
	for(int i=0; i<ROW; i++)
	{
		for(int j=0 ;j<COL; j++){
			cout<<"CITY "<<i +1<<", DAY "<<j +1<<" : "<<temp[i][j]<<endl;
		}
	}
	return 0;
}
