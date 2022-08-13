#include<iostream>
using namespace std;
int main()
{
	int num ,positive=0,negative=0,zero=0;
	char ch;
	do{
		cout<<"ENTER THE NUMBER"<<endl;
		cin>>num;
		if(num<0){
			negative++;
		}
		else if(num>0){
			positive++;
		}
		else{
			zero++;
		}
		cout<<"IF WANT TO CONTINUE PRESS Y ELSE N = ";
		cin>>ch;
       }
    while(ch!='n');
        cout<<"NUMBER OF POSITIVE NO ENTERED = "<<positive<<endl;
		cout<<"NUMBER OF NEGATIVE NO ENTERED = "<<negative<<endl;
		cout<<"NUMBER OF ZERO  ENTERED = "<<zero;

		return 0;
	}
