#include<iostream>
using namespace std;
int main()
{
	int num;
	char ch;
	
	do{
		cout<<"ENTER THE NUMBER = ";
		cin>>num;
		switch(num){
			case 1:
				cout<<"JANUARY HAS 31 DAYS"<<"\n";
				break;
			case 2:
					cout<<"FEBRARY HAS 28/29 DAYS"<<"\n";
				break;
			case 3:
					cout<<"MARCH HAS 31 DAYS"<<"\n";
				break;
			case 4:
					cout<<"APIRL HAS 30 DAYS"<<"\n";
				break;
			case 5:
					cout<<"MAY HAS 31 DAYS"<<"\n";
				break;
			case 6:
					cout<<"JUNE HAS 30 DAYS"<<"\n";
				break;
			case 7:
					cout<<"JULY HAS 31 DAYS"<<"\n";
				break;
			case 8:
					cout<<"AUGUEST HAS 31 DAYS"<<"\n";
				break;
			case 9:
					cout<<"SEPTEMBER HAS 30 DAYS"<<"\n";
				break;
			case 10:
					cout<<"OCTOBER HAS 31 DAYS"<<"\n";
				break;
			case 11:
					cout<<"NUMBER HAS 30 DAYS"<<"\n";
				break;
			case 12:
					cout<<"DECEMBER HAS 31 DAYS"<<"\n";
				break;
			default:
				    cout<<"OUT OF RANGE"<<"\n";
				}
				cout<<"DO YOU WANT TO CONINUE ENTER 'Y' ELSE ENTER 'N' ";
				cin>>ch;
			}
				while(ch!='n');
				return 0;
			}
				
				

				


