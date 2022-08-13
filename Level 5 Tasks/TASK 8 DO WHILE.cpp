#include<iostream>
using namespace std;
int main()
{
	long long int pro=1;
	int n=1;
	do{
		
			if(n%2!=0){
			pro=pro*n;
			n++;
	}
}
    while(n<=30);
    cout<<"THE PRODUCT OF 1st 30 ODD NO IS = "<<pro;
    
    return 0;
}
