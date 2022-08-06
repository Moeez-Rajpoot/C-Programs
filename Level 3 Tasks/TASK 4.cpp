#include <iostream>
using namespace std;
int main() 
{
int a,b,c;
cout<<"enter the value of a and b =";
cin>>a;cin>>b; 
c = a & b;
cout << "The BITWISE AND value of a,b is ="<<c<<endl;
c = a | b;
cout << "The BITWISE OR value of a,b is ="<<c<<endl;
c = a ^ b;
cout << "The BITWISE XOR value of a,b is ="<<c<<endl;
return 0;
}
