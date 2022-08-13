#include <iostream>
using namespace std;
int fibon(int a) {
   if((a==1)||(a==0)) {
      return(a);
   }else {
      return(fibon(a-1)+fibon(a-2));
   }
}
int main() {
   int num , i=0,sep;
   cout << "ENTER A NUMBER = ";
   cin >> num;
   while(i < num) {
      sep=fibon(i);
      i++;
   }
   cout<<"THE FIBONACCI NUMBER OF "<<num<<" IS = "<<sep;
   return 0;
}
