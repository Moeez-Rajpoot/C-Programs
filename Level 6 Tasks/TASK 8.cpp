#include<iostream>
using namespace std;
int main()
{
	int ar[10] , max;
	for(int i=0;i<5;i++){
		cout<<"ENTER THE VALUE OF INDEX "<<i<<" = ";
		cin>>ar[i];
	}
	for(int j=0;j<5;j++){
		if(max<ar[j]){
		max=ar[j];
	}
	}
	cout<<"THE LARGEST IS = "<<max;
}
