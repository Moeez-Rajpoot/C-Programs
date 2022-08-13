#include <iostream>
#include<cstring>
using namespace std;
int main(){
	system("color 0A");
    char str1[20];
    int i, length ;
	bool flag=false;
    cout<<"ENTER A STRING = "; 
	cin>>str1;
    length = strlen(str1);
    for(i=0;  i<length  ;i++){
        if(str1[i] != str1[length-i-1]){
            flag = true;
            break;
   }
}
    if (flag) {
        cout << str1 << " IS NOT A PANLINDROME " << endl; 
    }    
    else {
        cout << str1 << " IS A PANLINDROME" << endl; 
    }
    return 0;
}
