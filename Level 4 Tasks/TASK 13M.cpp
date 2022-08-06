#include<iostream>
using namespace std;
int main()
{
	int u;
	cout<<"ENTER THE NUMBER OF UNITS CONSUMED = ";
	cin>>u;
	if(u<100){
	  cout<<"THE PRIZE OF BILL IS = "<<u*5;
}
	else if(u>=100&&u<500){
	  cout<<"THE PRIZE OF BILL IS = "<<((u-400)*5)+((u-99)*15);
}
	else{
	  cout<<"THE PRIZE OF BILL IS = "<<(99*5)+(400*15)+((u-499)*25);
}
	      return 0;
}
