#include<iostream>
using namespace std;
int main ()
{
	char ch;
	cout<<"Enter any character:";
	cin>>ch;
	if (ch>=65 && ch<=90){
		cout<<"Character is a capital letter";
	}
	else if (ch>=97 && ch<=122){
		cout<<"Character is a small letter";
	}
	else if (ch>=48 && ch<=57){
		cout<<"Character is a digit";
	}
	else if ((ch>0 && ch<=47)||(ch>=58 && ch<=64)||
               (ch>=91 && ch<=96)||(ch>=123 && ch<=127)){
		cout<<"Character is a special symbol";
	}
	return 0;
}

