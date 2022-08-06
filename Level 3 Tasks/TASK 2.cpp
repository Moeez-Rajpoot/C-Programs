#include<iostream>
using namespace std;
int main()
{
	int a=5,b=6,c=0,d,e,f;
	d=a+++b+++c;
	cout<<"The value calculated by 1st equation is ="; cout<<d; cout<<"\n";
	e=b---a---c;
	cout<<"The value calculated by 2nd equation is ="; cout<<e; cout<<"\n";
	f=(++a+(++b)+c);
	cout<<"The value calculated by 3rd equation is ="; cout<<f; cout<<"\n";
	return 0;
}
