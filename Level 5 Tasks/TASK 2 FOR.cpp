#include<iostream>
using namespace std;
int main()
{
	int sum,pro=1;
	for(double n=1;n<=10;n++){
		pro=pro*n;
		sum=sum+n;
	}
	cout<<"the product is = "<<pro<<endl;
	cout<<"the sum is = "<<sum<<endl;
	cout<<"the average = "<<sum/10;
	return 0;
}
