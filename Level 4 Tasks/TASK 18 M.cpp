#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	cout<<"ENTER THE QUANTITY"<<endl;
	cin>>a;
	if(a*100>1000){
		b=a*0.10;
		cout<<"YOU HAVE GOT 10% DISCOUNT"<<endl;
		d=a*100-b;
		cout<<"YOUR TOTAL COST IS NOW = "<<d;
	}
	else{
		c=a*100;
		cout<<"YOUR TOTAL COST IS "<<c;
	}
	return 0;
}
