#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"ENTER THREE NUMBERS"<<endl;
	cin>>a>>b>>c;
	if(a>b&&a>c){
		cout<<"THE LARGEST NUMBER IS = "<<a;
	}
	else{
		if(b>a&&b>c)
		cout<<"THE LARGEST NUMBER IS = "<<b;
		
		else
		cout<<"THE LARGEST NUMBER IS = "<<c;
	}
	return 0;
	}
	
