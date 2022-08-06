#include<iostream>
using namespace std;
int main()
{
	double a,b,p;
	cout<<"ENTER THE NUMBER OF CLASSES HELD = "<<endl;
	cin>>a;
	cout<<"ENTER THE NUMBER OF CLASSES ATTENDED = "<<endl;
	cin>>b;
	p=((b/a)*100);
	cout<<"YOUR PERCENTAGE OF ATTENDED CLASSES IS =  "<<p<<"%\n";
	if(p>=75){
		cout<<"YOU ARE ALLOWED TO SIT IN EXAMS"; cout<<"\n";
	}
	else{
		cout<<"YOU ARE NOT ALLOWED TO SIT IN EXAMS";cout<<"\n";
	}
	return 0;
}
