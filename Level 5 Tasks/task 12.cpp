#include <iostream>
using namespace std;

int main()
{
    int i, sum = 0;
    cout << " Numbers between 100 and 200, divisible by 7: " << endl;
    for (i = 101; i < 200; i++) 
    {
        if (i % 7 == 0) 
        {
            cout << " " << i;
            sum=sum+i;
        }
    }
    cout << "\n The sum : " << sum << endl;
}
