#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	system("color 0A");
	int lenght1 ,lenght2, max;
	char str[50] , str1[50];
	bool flag=true;
	cout<<"ENTER THE 1st STRING = ";
	cin.getline(str,50); 
	cout<<"ENTER THE 2nd STRING = ";
	cin.getline(str1,50);
	lenght1=strlen(str);
	lenght2=strlen(str1);
	if(lenght1>=lenght2){
		max=lenght1;
	}
	else{
		max=lenght2;
	}
	for(int i=0; i<max ;i++)
	{
		if(str[i]!=str1[i] && str1[i]!=str[i] ){
			flag=false;
			break;
		}
	}
	cout<<"\n\n";
		if(flag){
			cout<<"STRINGS ARE EQUAL ";
			
		}
		else{
			cout<<"STRINGS ARE NOT EQUAL ";
		}
	return 0;
	
}
