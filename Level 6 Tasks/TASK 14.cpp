#include<iostream>
using namespace std;
int main()
{
	int count1=0 ,count2=0 ;
	double percentage;
	bool ar[20];
	for(int i=0 , j=1 ; j<21 ,i<20 ; j++ ,i++){
		cout<<"IF STUDENT IS PRESENT ON DAY "<<j<<" PRESS 1 IF ABSENT PRESS 0 = ";
		cin>>ar[i];
		if(ar[i]==1){
			count1++;
		}
		else{
		count2++;
	}
	}
	percentage=(count1/20.0)*100;
	cout<<"THE TOTAL NUMBER OF PRESENTS ARE = "<<count1<<endl;
	cout<<"THE TOTAL NUMBER OF ABSENTS  ARE = "<<count2<<endl;
	cout<<"THE ATTENDANCE PERCENTAGE OF STUDENT IS = "<<percentage<<endl;
	return 0;
}
