#include<iostream>
using namespace std;
template <typename A>
A swp(A &a,A &b)
{
	A temp;
	temp=a;
	a=b;
	b=temp;
}
int main(){
	double num,num1;
	cout<<"ENTER TWO NUMBERS TO SWAP = "<<endl;
	cin>>num>>num1;
	cout<<"\n*********BEFORE SWAPING*********"<<endl;
	cout<<"THE VALUE OF A = "<<num<<endl;
	cout<<"THE VALUE OF B = "<<num1<<endl;
	cout<<"**********AFTER SWAPING*********"<<endl;
	swp(num,num1);
	cout<<"THE VALUE OF A = "<<num<<endl;
	cout<<"THE VALUE OF B = "<<num1<<endl;
	
}
