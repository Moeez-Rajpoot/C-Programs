#include<iostream>
using namespace std;
int main()
{
   for(int n=1;n<=127;n++){
   	cout<<n<<" = "<<static_cast <char> (n)<<endl;
   }	
   return 0;
}
