#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"THE THREE SIDES OF TRIANGLE = ";
	cin>>a>>b>>c;
	if(a==b&&b==c)
	  cout<<"THE TRIANGLE IS EQUILATERAL";
	  else if(a==b || a==c || b==c)
	  	cout<<"THE TRIANGLE IS ISOSCELES";
	  else
	  	cout<<"THE TRIANGLE IS SCALENE";
	return 0;
}
