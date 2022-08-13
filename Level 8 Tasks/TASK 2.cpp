#include<iostream>
using namespace std;
double sum(double n1, double n2);
double mul(double n1, double n2);
double sub(double n1, double n2);
double div(double n1, double n2);
int main()
{
	double num1,num2;
	char op,choice;
	do{
	cout<<"ENTER 1st NUMBER = ";
	cin>>num1;
	cout<<"ENTER OPERATOR = ";
	cin>>op;
	cout<<"ENTER 2nd NUMBER = ";
	cin>>num2;
	switch(op)
	{
		case '+':
			cout<<"THE ANS IS = "<<sum(num1,num2)<<endl;
			break;
		case '-':
			cout<<"THE ANS IS = "<<sub(num1,num2)<<endl;
			break;
		case '*':
			cout<<"THE ANS IS = "<<mul(num1,num2)<<endl;
			break;
		case '/':
			cout<<"THE ANS IS = "<<div(num1,num2)<<endl;
			break;
		default:
			cout<<"INVALID OPRATOR "<<endl;
			break;
		}
		cout<<"PRESS N TO EXIT & Y TO CONTINUE = ";
	    cin>>choice;
	    cout<<"\n";
	}
	while(choice!='n'&& choice!='N');
	return 0;
}
double sum(double n1, double n2){
	return n1+n2;
}
double mul(double n1, double n2){
	return n1*n2;
}
double sub(double n1, double n2){
	return n1-n2;
}
double div(double n1, double n2){
	return n1/n2;
}
