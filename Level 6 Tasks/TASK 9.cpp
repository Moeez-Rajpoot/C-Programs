#include<iostream>
using namespace std;
int main()
{
	int ar[5] ,grade;
	double sum=0 ,percentage ;
	for(int i=0, x=1 ; i<5 , x<6 ; x++ ,i++)
	{
		cout<<"ENTER THE VALUE OF SUBJECT "<<x<<" = ";
		cin>>ar[i];
	}
	for(int i=0;i<5;i++){
		sum=sum+ar[i];
		
	}
	percentage=(sum/500.0)*100;
	cout<<"THE PERCENTAGE IS = "<<percentage<<endl;
	if(percentage>=90)
	cout<<"YOU GRADE IS A+";
	else if(percentage>=80 && percentage<90)
	cout<<"YOU GRADE IS A ";
	else if(percentage>=70 && percentage<80)
	cout<<"YOU GRADE IS B ";
	else if(percentage>=60 && percentage<70)
	cout<<"YOU GRADE IS C ";
	else
	cout<<" FAIL"; 
	return 0;
}
