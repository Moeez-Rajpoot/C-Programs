#include <bits/stdc++.h>  
using namespace std;
int main() 
{  
    int ar[10], first, second, third; 
	for(int i=0;i<10;i++){
		cout<<"ENTER VALUE OF INDEX "<<i<<" = ";
		cin>>ar[i];
	}   
    for(int i=0; i<10; i++)  
    {  
          
        if (ar[i] > first) 
        {  
			third = second;  
            second = first;
			first = ar[i];    
        }  
    
        else if (ar[i] > second) 
        {    
            third=second;
            second = ar[i];  
        }  
  
        else if (ar[i] > third)  
            third = ar[i];  
    }  
  
    cout << "Three largest elements are "<<first<<" "<<second<<" "<<third<<endl; 
		return 0; 
}  
