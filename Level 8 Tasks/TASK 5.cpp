#include<iostream>
using namespace std;
int prime(int n,bool flag);
int main()
{
	int num;
	bool flag=true;
	cout<<"ENTER A NUMBER TO CHECK PRIME OR NOT = ";
	cin>>num;
	if(prime(num ,flag)){
		cout<<num<<" IS PRIME NUMBER";
	}
	else{
		cout<<num<<" IS NOT PRIME NUMBER";
	}
	return 0;
}
int prime(int n, bool flag){
	if(n==0||n==1){
		flag=false;
		return flag;
	}
	else{
		for(int i=2; i<=n/2;i++){
			if(n%i==0){
				flag=false;
				return flag;
			}
		}
	}
}
