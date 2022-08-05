#include<iostream>
using namespace std;
int main()
 {
 	int u,e,c,m,i;
	double total,percentage;
 	cout<<"ENTER OBTAINED MARKS OF URDU =";
 	cin>>u;
 	cout<<"\nENTER OBTAINED MARKS OF ENGLISH=";
 	cin>>e;
 	cout<<"\nENTER OBTAINED MARKS OF COMPUTER=";
 	cin>>c;
 	cout<<"\nENTER OBTAINED MARKS OF MATHS="; 
 	cin>>m;
 	cout<<"\nENTER OBTAINED MARKS OF ISLAMIYAT =";
 	cin>>i;
 	total=u+e+c+m+i;
 	percentage=total/500*100;
 	cout<<"THE PERCENTAGE OF YOUR MARKS IS ="<<percentage;
 	return 0;
 }
