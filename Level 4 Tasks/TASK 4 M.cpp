#include <iostream>
#include<math.h>
using namespace std;
int main()
{
	int x,y,z,j;
	double obtainmarks, totalmarks=400;
	float percentage;
	cout<<"ENTER SUBJECT 1 OBTAINED MARKS = ";
	cin>>x;
	cout<<"ENTER SUBJECT 2 OBTAINED MARKS = ";
	cin>>y;
	cout<<"ENTER SUBJECT 3 OBTAINED MARKS = ";
	cin>>z;
	cout<<"ENTER SUBJECT 4 OBTAINED MARKS = ";
	cin>>j;
	obtainmarks=x+y+z+j;
	percentage=(obtainmarks/totalmarks)*100;
	cout<<"obtained marks="<<obtainmarks<<"\n";
	cout<<"total marks="<<totalmarks<<"\n";
	cout<<"percentage="<<percentage<<"\n";
	if (percentage<50)
	{
			cout<<"YOU ARE FAIL"<<"\n";
	}
	else 
	{
		cout<<"YOU ARE PASS"<<"\n";
	}
    if (percentage>=80)
	{
		cout<<"YOU GOT A+ GRADE"<<"\n";
	}
	else if(percentage>=70<80)
	{
		cout<<"YOU GOT A GRADE"<<"\n";
	}
	else if (percentage>=60<70)
	{
		cout<<"YOU GOT B GRADE"<<"\n";
	}
	else if (percentage>=50<60)
	{
		cout<<"YOU GOT C GRADE"<<"\n";
	}
	else
	{
		cout<<"YOU GOT F GRADE"<<"\n";
	}
	return 0;
}
