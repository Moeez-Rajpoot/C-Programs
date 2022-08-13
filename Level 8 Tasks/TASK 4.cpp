#include<iostream>
using namespace std;
int cam(int n,bool flag);
int main()
{
	int num;
	bool flag=true;
	cout<<"ENTER A NUMBER = ";
	cin>>num;
	if(cam(num,flag)){
		cout<<num <<" IS EVEN NUMBER.";
	}
	else{
		cout<<num <<" IS ODD NUMBER.";
	}
	return 0;
	}
int cam(int n,bool flag){
	if(n%2==0){
		flag = true;
		return flag; 
	}
	else{
		flag = false;
		return flag; 
	}
}
