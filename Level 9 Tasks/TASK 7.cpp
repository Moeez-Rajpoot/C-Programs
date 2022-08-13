#include<iostream>
using namespace std;
int Sum(int a){
	if (a==0)
	return 0;
	return (a%10 + Sum(a/10));
}
int main()
{
	int num;
	cout<<"ENTER SOME DIGITS = ";
	cin>>num;
	cout<<"THE SUM OF DIGITS OF "<<num<<" IS "<<Sum(num);
	return 0;
}
