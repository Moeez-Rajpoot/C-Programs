#include<iostream>
using namespace std;
int main()
{
	double a,b,D;
	char c;
	cout<<"WELCOME IN SIMPLE CALCULATOR"; cout<<"\n";
	
	cout<<"ENTER THE 1st NUMBER"; cout<<"\n";
	cin>>a;
	cout<<"ENTER THE OPERATOR";cout<<"\n";
	cin>>c;
	cout<<"ENTER THE 2nd NUMBER"; cout<<"\n";
	cin>>b;
	switch(c)
	{
		case '+': D=a+b;
		cout<<"THE ANSWER IS = "<<D;
		break;
		case '-': D=a-b;
		cout<<"THE ANSWER IS = "<<D;
		break;
		case '*': D=a*b;
		cout<<"THE ANSWER IS = "<<D;
		break;
		case '/': D=a/b;
		cout<<"THE ANSWER IS = "<<D;
		break;
	}
	return 0;
}
