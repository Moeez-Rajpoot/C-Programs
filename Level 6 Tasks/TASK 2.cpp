#include<iostream>
using namespace std;
int main()
{
	int ar[10];
	for(int i=0;i<10;i++){
		cout<<"THE VALUE OF INDEX "<<i<<" = ";
		cin>>ar[i];
	}
	cout<<"**********OUTPUT***********"<<endl;
	for(int i=0;i<10;i++){
		cout<<"THE VALUE IN INDEX "<<i<<" = "<<ar[i]<<endl;
	}
	return 0;
}
