#include<iostream>
using namespace std;
int main()
{
	int ch,num[10];
	for(int i=0;i<10;i++){
		cout<<"ENTER THE VALUE AT INDEX = "<<i<<" = ";
		cin>>num[i];
	}
	cout<<"ENTER THE INDEX NUMBER YOU WANT TO PRINT = ";
	cin>>ch;
	cout<<"THE VALUE OF "<<ch<<" is "<<num[ch];
	
	return 0;
	
}
