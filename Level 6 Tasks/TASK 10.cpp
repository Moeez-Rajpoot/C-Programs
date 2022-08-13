#include<iostream>
using namespace std;
int main()
{
	int ar1[5] ,ar2[5] ,ar3[5] ,sum=0;
	for(int i=0, a=1 ; a<6 ,i<5 ; a++, i++)
	{
		cout<<"ENTER THE QUATITY OF "<<a<<" PRODUCT = ";
		cin>>ar1[i];
		cout<<"ENTER THE PRICE OF "<<a<<" PRODUCT ";
		cin>>ar2[i];
		cout<<"\n";
	}
	for(int i=0;i<5;i++)
	{
		ar3[i]=ar2[i]*ar1[i];
	}
	for(int x=0;x<5;x++)
	{
		sum=sum+ar3[x];
	}
	   cout<<"ITEMS";
	   cout<<"\t\t QTY ";
	   cout<<"\t\t PRICE ";
	   cout<<"\t\t TOTAL "<<endl;
	for(int i=0, a=1 ; a<6 ,i<5 ; a++, i++)
	{
		cout<<"PRO NO "<<a;
	   cout<<"\t\t "<<ar1[i];
	   cout<<"\t\t "<<ar2[i];
	   cout<<"\t\t "<<ar1[i]*ar2[i]<<endl;
	}
	cout<<" \n\n YOUR TOTAL BILL IS = "<<sum;
	
	return 0;
}

