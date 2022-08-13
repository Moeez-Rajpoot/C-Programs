#include<iostream>
using namespace std;
int main()
{
	int cap,sma;
	char alpa,ch2;
	do{
		cout<<"ENTER A LETTER = "<<endl;
		cin>>alpa;
		if(alpa>=65&&alpa<=90){
			cout<<"YOU ENTERED CAPITAL LETTER "<<endl;
			cap++;
		}
		else if(alpa>=61&&alpa<=122){
			cout<<"YOU ENTERED SMALL LETTER "<<endl;
			sma++;
		}
		else{
			cout<<"INVALID INPUT"<<endl;
		}
		cout<<"IF WANT TO ENTER AGAIN PRESS y OR ELSE n TO EXIT "<<endl;
		cin>>ch2;
	}
	while(ch2!='n');
	cout<<"CAPITAL LETTERS ENTERED = "<<cap<<endl;
	cout<<"SMALL LETTER ENTERED = "<<sma<<endl;
	return 0;
}
