#include<iostream>
using namespace std;
int sq(int n);
int main()
{
	int num;
	cout<<"ENTER A NUMBER = ";
	cin>>num;
	cout<<"THE SQUARE OF A NUMBER IS = "<<sq(num);
	return 0;
}
int sq(int n){
	return n*n;
}
