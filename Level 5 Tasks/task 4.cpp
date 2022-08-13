#include<iostream>
using namespace std;
int main()
{
	int a,pro=1;
	cout<<"THE A NUMBER = ";
	cin>>a;
	for(int n=1;n<=a;n++){
		pro=pro*n;
	}
	cout<<"THE FACTORIAL OF "<<pro;
	return 0;
}
