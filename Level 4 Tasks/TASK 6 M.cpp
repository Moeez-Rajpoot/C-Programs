#include <iostream>
#include<math.h>
using namespace std;
int main()
{
	int x,y;
	char z;
	cout<<"ENTER TWO NUMBERS = ";
	cin>>x>>y;
	cout<<"ENTER THE OPERATION + , - , / , * = ";
	cin>>z;
	if(z=='+'){
		cout<<"THE ADDED VALUE IS = "<<x+y;
	}
	else if(z=='-'){
		cout<<"THE SUBTRACTED VALUE IS = "<<x-y;
	}
	else if(z=='*'){
		cout<<"THE MULTIPLICATED VALUE IS = "<<x*y;
	}
	else if(z=='/'){
		cout<<"THE DIVIDED VALUE IS = "<<x/y;
	}
	else{
		cout<<"SORRY YOU HAVE ENETERED OUT OF RANGE CHOICE";
	}
	return 0;
}
