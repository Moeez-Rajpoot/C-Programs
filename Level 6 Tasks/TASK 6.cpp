#include<iostream>
using namespace std;
int main()
{
	int ar[5], br[5], cr[5]; 
	for(int i=0;i<5;i++){
		cout<<"THE VALUE OF INDEX "<<i<<" OF ARRAY 1 = ";
		cin>>ar[i];
	}
	cout<<"***************************************"<<endl<<endl;
	for(int i=0;i<5;i++){
		cout<<"THE VALUE OF INDEX "<<i<<" OF ARRAY 2 = ";
		cin>>br[i];
	}
	cout<<"***************************************"<<endl<<endl;
	for(int i=0;i<5;i++){
		cr[i]=ar[i]+br[i];
		cout<<"THE VALUE IN INDEX "<<i<<" of 3rd array is = "<<cr[i]<<endl;
	}
	return 0;
	} 
