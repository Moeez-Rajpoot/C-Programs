#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	double value,PO,P;
	cout<<"ENTER THE VALUE OF VARIABLE =";
	cin>>value;
	cout<<"\nENTER THE POWER OF VARIABLE =";
	cin>>P;
	PO=pow(value,P);
	cout<<"\nTHE CALCULATED VALUE OF GIVEN POWER & VARIABLE IS = " <<PO;
	return 0;
}
