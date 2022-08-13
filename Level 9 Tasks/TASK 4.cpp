#include<iostream>
using namespace std;
int sum(int a){
	if(a==0){
		return 0;
	}
	else{
		return a+sum(a-1);
	}
}
int main()
{
	int num;
	cout<<"ENTER A NUMBER TO FIND SUM UPTO = ";
	cin>>num;
	cout<<"THE SUM OF "<<num<<" NATURAL NUMBERS IS = "<<sum(num);
	return 0;
}
