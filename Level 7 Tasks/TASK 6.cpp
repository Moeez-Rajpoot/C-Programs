#include<iostream>
using namespace std;
int main()
{
	system("color 0A");
	char ar[50];
	cout<<"ENTER THE STRING = ";
	cin.get(ar,50);
	int lenght=0;
	while(ar[lenght]!='\0'){
		lenght++;
	}
	cout<<"THE REVERSE OF STRING IS = ";
	for(int i=lenght-1; i>=0; i--){
		cout<<ar[i];
	}
	return 0;
}
