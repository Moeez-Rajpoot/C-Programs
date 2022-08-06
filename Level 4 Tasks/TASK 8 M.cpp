#include<iostream>
using namespace std;
int main()
{
	char a;
	cout<<"ENTER A CHARACTER = ";
	cin>>a;
	if( a=='a'||'A' || a=='e'||'E' || a=='i'||'I' || a=='o'||'O' || a=='u'||'U')
	{  
	  	cout<<"YOU ENETERED VOWEL";
	  }
	else{
	  	cout<<"YOU ENTERED CONSTANT";
	  }
	  return 0;
}
