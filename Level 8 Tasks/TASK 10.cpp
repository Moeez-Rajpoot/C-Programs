#include<iostream>
using namespace std;
int max(int a, int b);
float max(float a, float b);
int main()
{
	double num,num1,maxi;
	cout<<"ENTER TWO NUMBERS = "<<endl;
	cin>>num>>num1;
	cout<<"THE MAXIMUM NUMBER IS = "<<max(num ,num1);
	return 0;
}
int max(int a, int b)
{
	if(a>b){
		return a;
	}
}
float max(float a, float b)
{
	if(a>b){
		return a;
	}
}
