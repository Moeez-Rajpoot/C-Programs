#include<iostream>
using namespace std;
int main()
{
	long long int pro=1;
    for(int n=1;n<=30;n++){
    	if(n%2!=0){
    		pro=pro*n;
		}
	}
	cout<<"THE PRODUCT OF 1st 30 ODD NO IS = "<<pro;
	return 0;	
}
