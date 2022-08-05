#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	double value,asin,bcos,ctan;
	cout<<"ENTER THE VALUE OF VARIABLE =";
	cin>>value;
	asin=sin(value);
	bcos=cos(value);
	ctan=tan(value);
	cout<<"\nTHE SIN VALUE OF VARIABLE IS ="; cout<<asin;
	cout<<"\nTHE COS VALUE OF VARIABLE IS ="; cout<<bcos;
	cout<<"\nTHE TAN VALUE OF VARIABLE IS ="; cout<<ctan;
	return 0;
}
