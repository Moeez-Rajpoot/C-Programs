#include<iostream>
using namespace std;
int main()
{
	int num1,num2,sum;
	char ch;
	do{
		cout<<"ENTER TWO NUMBERS FOR ADDITION = "<<endl;
		cin>>num1>>num2;
		sum=num1+num2;
		cout<<"THE SUM OF "<<num1<<" & "<<num2<<" is "<<sum<<endl;
		cout<<"ENTER Y TO SUM AGAIN OR N TO EXIT = ";
      	cin>>ch;
	}
	while(ch!='n');
	return 0;
}
