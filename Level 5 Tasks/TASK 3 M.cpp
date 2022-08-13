#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"ENTER A NUMBER = ";
	cin>>a;
	for(int num=1;num<=10;num++){
		cout<<a << '*' << num << '=' << a*num <<endl;
	}
	return 0;
}
