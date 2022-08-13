#include<iostream>
using namespace std;
template<typename T>
T sum(T a, T b)
{
	return a+b;
}
template<typename T>
T sub(T a, T b)
{
	return a-b;
}
template<typename T>
T mul(T a, T b)
{
	return a*b;
}
template<typename T>
T div(T a, T b)
{
	return a/b;
}
int main()
{
	double num,num1;
	char op,choice;
	do{
cout<<"ENTER 1st NUMBER = ";
cin>>num;
cout<<"ENTER OPERATOR = ";
cin>>op;
cout<<"ENTER 2nd NUMBER = ";
cin>>num1;
switch(op)
{
case '+':
cout<<"THE ANS IS = "<<sum(num,num1)<<endl;
break;
case '-':
cout<<"THE ANS IS = "<<sub(num,num1)<<endl;
break;
case '*':
cout<<"THE ANS IS = "<<mul(num,num1)<<endl;
break;
case '/':
cout<<"THE ANS IS = "<<div(num,num1)<<endl;
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
