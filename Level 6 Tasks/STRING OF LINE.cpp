#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char ar[100];
	cout<<"ENTER YOUR NAME  = ";
	cin.getline(ar,100);
	strrev(ar);
	cout<<"\n\nYOUR REVERSE NAME IS = "<<ar;
	return 0;
}
