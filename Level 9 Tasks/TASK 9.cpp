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
   int num , i=0;
   cout << "ENTER THE NUMBER FOR SERIES = ";
   cin >> num;
   cout << "\nFIBONNACCI SERIES ARE = ";
   while(i < num) {
      cout << " " << fibon(i);
      i++;
   }
   return 0;
}
