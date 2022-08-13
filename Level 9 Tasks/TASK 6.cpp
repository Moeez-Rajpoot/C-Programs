#include<iostream>
using namespace std;
int hcf(int a, int b){
	if(b==0){
		return a;
	}
	else{
		return hcf(b, a%b);
	}
}
int main()
{
	int num,num1;
	cout<<"ENTER TWO NUMBERS TO FIND HCF = "<<endl;
	cin>>num>>num1;
	cout<<"THE HCF OF "<<num<<" & "<<num1<<" IS "<<hcf(num,num1);
	return 0;
}
