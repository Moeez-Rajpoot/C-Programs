#include<iostream>
using namespace std;
void swap(int &num ,int &num1);
int main()
{
	int a ,b;
	cout<<"ENTER TWO NUMBERS FOR SWAPING ="<<endl;
	cin>>a>>b;
	cout<<"\n**************************BEFORE SWAPING****************************"<<endl;
	cout<<"THE VALUE OF A  IS = "<<a<<endl;
	cout<<"THE VALUE OF B  IS = "<<b<<endl;
	swap(a,b);
	cout<<"\n**************************AFTER SWAPING*****************************"<<endl;
	cout<<"THE VALUE OF A  IS = "<<a<<endl;
	cout<<"THE VALUE OF B  IS = "<<b<<endl;
	return 0;
}
void swap(int &num ,int &num1)
{
	int temp=0;
	temp=num;
	num=num1;
	num1=temp;
}
