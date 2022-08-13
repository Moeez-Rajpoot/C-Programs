#include<iostream>
using namespace std;
template <typename T>
T sq(T A){
	return A*A;
}
int main()
{
	double num;
	cout<<"ENTER A NUMBER = ";
	cin>>num;
	cout<<"\nTHE SQUARE OF "<<num<<" IS "<<sq(num);
	return 0;
}
