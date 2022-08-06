#include <iostream>
using namespace std;

int main() 
{
    int n, r= 0, R;

    cout << "Enter an integer: ";
    cin >> n;

    while(n != 0) {
        R= n%10;
        r= r*10+R;
        n /= 10;
    }
    cout << "Reversed Number = " <<r;
    return 0;
}
