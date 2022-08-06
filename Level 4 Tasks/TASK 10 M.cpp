#include <iostream>
#include<math.h>
using namespace std;
int main()
{
	int x,y,z,j,p;
	double obtainmarks, totalmarks=400 ;
	cout<<"ENTER SUBJECT 1 OBTAINED MARKS = ";
	cin>>x;
	cout<<"ENTER SUBJECT 2 OBTAINED MARKS = ";
	cin>>y;
	cout<<"ENTER SUBJECT 3 OBTAINED MARKS = ";
	cin>>z;
	cout<<"ENTER SUBJECT 4 OBTAINED MARKS = ";
	cin>>j;
	obtainmarks=x+y+z+j;
	p=(obtainmarks/totalmarks)*100;
	cout<<"obtained marks="<<obtainmarks<<"\n";
	cout<<"total marks="<<totalmarks<<"\n";
	cout<<"percentage="<<p<<"\n";
	switch(p/10)
	{
	 case 10:
	 case 9 :
	 case 8 :	
	 	cout<<"YOU GOT A+ GRADE";
	 	break;
	 case 7 :
	 case 6 :	
	    cout<<"YOU GOT A GRADE";
		break;
	 case 5 :
	 case 4 :	
	    cout<<"YOU GOT B GRADE";
		break;
	 case 3 :
	 case 2 :	
	    cout<<"YOU GOT C GRADE";
		break;				
	default:
		cout<<"YOU GOT F GRADE";
		break;}
	
return 0;
}
	
   
