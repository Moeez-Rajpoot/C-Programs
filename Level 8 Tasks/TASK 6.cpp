#include<iostream>
using namespace std;
double area(double l,double w);
double area(double r);
int main()
{
	double L,W,R;
	cout<<"ENTER THE LENGHT OF RECTANGLE = ";
	cin>>L;
	cout<<"ENTER THE WIDTH OF RECTANGLE = ";
	cin>>W;
	cout<<"ENTER THE RADIUS OF CIRCLE = ";
	cin>>R;
	cout<<"\nTHE AREA OF RECTANGE IS = "<<area(L,W)<<endl;
	cout<<"THE AREA OF CIRCLE IS = "<<area(R)<<endl;
	return 0;
}
double area(double l,double w)
{
	return l*w;
}
double area(double r)
{
	return 3.14*r*r;
}
