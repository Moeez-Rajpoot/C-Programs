#include<iostream>
using namespace std;
int main()
{
	int ar[10] , count,i,flag=true;
	for(int i=0;i<10;i++){
		cout<<"ENTER THE VALUE OF INDEX "<<i<<" = ";
		cin>>ar[i];
	}
	cout<<"ENTER THE VALUE TO FIND SPECIFIFC INDEX = ";
	cin>>count;
	for(int i =0; i<10; i++){
	if(ar[i]==count){
		cout<<"THE VALUE FOUND AT INDEX = "<<i;
		flag=false;
		break;
	}
}
	if(flag){
		cout<<"INDEX NOT FOUND";
	}

}
