#include<iostream>
using namespace std;
int main()
{
	int num, min=999999 ,max=0;
	char ch;
	do{
		cout<<"ENTER THE NUMBER"<<endl;
		cin>>num;
		if(num<=min){
			min=num;
		}
		if(num>=max){
			max=num;
		}
		cout<<"IF WANT  TO ENTER OTHER NUMBER PRESS Y ELSE N = ";
		cin>>ch;
       }
    while(ch!='n');
        cout<<"MAX = "<<max<<endl;
		cout<<"MIN = "<<min<<endl;

		return 0;
	}
	

