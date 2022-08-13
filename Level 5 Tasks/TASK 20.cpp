#include<iostream>
using namespace std;
int main()
{
   int n, sum = 0, remindar;
   cout<<"Enter a number = ";
   cin>>n;
   for (;n != 0;n= n/10) {
      remindar = n % 10;
      sum = sum + remindar;
   }
   cout<<"Sum of digits of a number = "<<sum<<endl<<endl<<endl;
   cout<<"LOGIC OF FINDING SUM OF DIFFERENT NUMBERS IN C++"<<endl<<endl;
   cout<<" suppose if the input is 98, the variable sum is 0 initially \n 98%10 = 8 (% is modulus operator, which gives us the remainder when 98 is divided by 10).\n sum = sum + remainder so sum = 8 now.\n 98/10 = 9 because in C language, whenever we divide an integer by another one,\n we get an integer. 9%10 = 9 sum = 8 (previous value) + 9 sum = 17 .\n 9/10 = 0. So finally, n = 0, the loop ends; we get the required sum";
   return 0;
}

