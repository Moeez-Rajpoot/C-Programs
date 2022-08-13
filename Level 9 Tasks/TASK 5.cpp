#include<iostream>
using namespace std;
int fac(int a){
	if(a==0){
		return 1;
	}
	else{
		return a*fac(a-1);
	}
}
int main()
{
	int num;
	cout<<"ENTER A NUMBER TO FIND FACTORIAL = ";
	cin>>num;
	cout<<"THE FACTORIAL "<<num<<" IS = "<<fac(num);
	return 0;
}
