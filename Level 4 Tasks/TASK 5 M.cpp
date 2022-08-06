#include <iostream>
#include<math.h>
using namespace std;
int main()
{
	int x,y,z;
	cout<<"ENTER TWO NUMBERS = ";
	cin>>x>>y;
	cout<<"CHOOSE THE OPERATION\n 1 FOR ADDITION\n 2 FOR SUBTRACTION \n 3 FOR MULTIPLICATION \n 4 FOR DIVISION \n = ";
	cin>>z;
	if(z==1){
		cout<<"THE ADDED VALUE IS = "<<x+y;
	}
	else if(z==2){
		cout<<"THE SUBTRACTED VALUE IS = "<<x-y;
	}
	else if(z==3){
		cout<<"THE MULTIPLICATED VALUE IS = "<<x*y;
	}
	else if(z==4){
		cout<<"THE DIVIDED VALUE IS = "<<x/y;
	}
	else{
		cout<<"SORRY YOU HAVE ENETERED OUT OF RANGE CHOICE";
	}
	return 0;
}
