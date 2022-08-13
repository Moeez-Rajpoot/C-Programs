#include <bits/stdc++.h> 
using namespace std; 
int main() 
{ 
    bool ar[10]={0,1,1,0,1,0,0,1,0,0};
	int count = 0;
	cout<<"BEFORE SEPARTION OF 0 & 1 = ";
	for (int i=0; i<10; i++){
    	cout<<ar[i]<<",";
	}
    for (int i=0; i<10; i++) { 
        if (ar[i] == 0) 
            count++; 
    } 
    for (int i=0; i<count; i++){
        ar[i] = 0; 
    }
  
    for (int i=count; i<10; i++){
        ar[i] = 1; 
    }
    cout<<"\nAFTER  SEPARTION OF 0 & 1 = ";
    for (int i=0; i<10; i++){
    	cout<<ar[i]<<",";
	}
	return 0;
    
        
} 

