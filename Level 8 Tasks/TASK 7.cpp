#include<iostream>
using namespace std;
int mini(int ar[5]);
int main(){
	int ar[5],minim;
	cout<<"ENTER 5 NUMBERS "<<endl;
	for(int i=0; i<5 ;i++){
		cin>>ar[i];
	}
	minim=mini(ar);
	cout<<"THE MINIMUM NUMBER IS = "<<minim;
	return 0;
}
int mini(int ar[5]){
	int minim=ar[0];
	for(int i=1; i<5 ;i++){
		if(ar[i]<minim){
			minim=ar[i];
		}
	}
return minim;
}
