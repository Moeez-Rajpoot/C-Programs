#include<iostream>
using namespace std;
int main()
{
	double a,b,c;
	cout<<"ENTER YOUR SALARY"<<endl;
	cin>>a;
	cout<<"ENTER YOUR YEAR OF SERVICE"<<endl;
	cin>>b;
	if(b>5){
		c=a*0.05;
		cout<<"YOUR NET BONUS AMOUNT IS = "<<c<<endl;
	}
	else{
		cout<<"SORRY YOU ARE NOT ELIGIBLE FOR BONUS";
	}
	return 0;
}
