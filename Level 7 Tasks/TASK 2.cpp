#include<iostream>
using namespace std;
int main()
{
	system("color 0A");
	const int ROW=2;
	const int COL=3;
	const int Z=2;
	int temp[ROW][COL][Z];
	cout<<"ENTER 12 VALUES : "<<endl;
	for(int i=0; i<ROW; i++)
	{
		for(int j=0 ;j<COL; j++)
		{
			for(int k=0 ;k<Z; k++){
		
			cin>>temp[i][j][k];
		}
	}
	}
	cout<<"\n\n\n";
	cout<<"VALUES STORED IN 3D ARRAY "<<endl;
	for(int i=0; i<ROW ; i++)
	{
		for(int j=0 ;j<COL; j++)
		{
		
		     for(int k=0 ;k<Z; k++){
			cout<<"test"<<"["<<i<<"]"<<"["<<j<<"]"<<"["<<k<<"]"<<" = "<<temp[i][j][k]<<endl;
		}
	}
}
	return 0;
}
