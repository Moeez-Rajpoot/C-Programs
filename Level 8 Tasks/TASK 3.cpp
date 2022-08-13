#include<iostream>
using namespace std;
double max(double n1, double n2);
double min(double n1, double n2);
int main()
{
	double num1,num2;
	cout<<"ENTER 1st NUMBER = ";
	cin>>num1;
	cout<<"ENTER 2nd NUMBER = ";
	cin>>num2;
	cout<<"THE MAXIMUM NUM IS = "<<max(num1,num2)<<endl;
	cout<<"THE MINIMUM NUM IS = "<<min(num1,num2)<<endl;
	return 0;
	}
double max(double n1, double n2){
	if(n1>n2){
		return n1; 
	}
	else{
		return n2;
	}
}
double min(double n1, double n2){
	if(n1<n2){
		return n1; 
	}
	else{
		return n2;
	}
}
