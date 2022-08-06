#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a,b,c,root1,root2,d,realPart,imaginaryPart;
    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;
    d = (b*b)-4*a*c;
    if (d > 0) {
        root1=(-b+sqrt(d))/(2*a);
        root2=root1;
        cout <<"Roots are real and different."<< endl;
        cout <<"root1="<<root1<<endl;
        cout <<"root2="<<root2<<endl;
    }
    else if (d==0) {
        cout << "Roots are real and same."<< endl;
        root1=(-b+sqrt(d))/(2*a);
        cout<<"root1=root2 ="<<root1<<endl;
    }
    else {
        realPart = -b/(2*a);
        imaginaryPart =sqrt(-d)/(2*a);
        cout << "Roots are complex and different."  << endl;
        cout << "root1 = "<<realPart<<"+"<<imaginaryPart<< "i" << endl;
        cout << "root2 = "<<realPart<<"-"<<imaginaryPart<< "i" << endl;
    }
    return 0;
}
