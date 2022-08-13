#include<iostream>
using namespace std;
int main()
{
		double a,b,D;
	char c,ch;
	do{
	cout<<"WELCOME IN SIMPLE CALCULATOR"<<"\n";
	cout<<"ENTER THE 1st NUMBER"<<"\n";
	cin>>a;
	cout<<"ENTER THE OPERATOR"<<"\n";
	cin>>c;
	cout<<"ENTER THE 2nd NUMBER"<<"\n";
	cin>>b;
	switch(c)
	{
		case '+': D=a+b;
		cout<<"THE ANSWER IS = "<<D<<"\n";
		break;
		case '-': D=a-b;
		cout<<"THE ANSWER IS = "<<D<<"\n";
		break;
		case '*': D=a*b;
		cout<<"THE ANSWER IS = "<<D<<"\n";
		break;
		case '/': D=a/b;
		cout<<"THE ANSWER IS = "<<D<<"\n";
		break;
		default:
			cout<<"INVALID OPERATOR "<<"\n";
	}
	cout<<"DO YOU WANT CALCULATE AGAIN PRESS 'Y' ELSE 'N' ";
	cin>>ch;
}
while(ch!='n');
	return 0;
}

