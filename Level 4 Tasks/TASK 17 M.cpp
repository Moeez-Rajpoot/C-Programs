#include <iostream>
using namespace std;
int main()
{
    int a;
    cout<<"ENTER THE NUMBER OF MONTH"<<endl;
    cin>>a;
    switch(a)
    {
        case 1: 
            cout<<"January have 31 days";
            break;
        case 2: 
            cout<<"February have 28/29 days";
            break;
        case 3: 
            cout<<"March have 31 days";
            break;
        case 4: 
            cout<<"April have 30 days";
            break;
        case 5: 
            cout<<"May have 31 days";
            break;
        case 6: 
            cout<<"June have 30 days";
            break;
        case 7: 
            cout<<"July have 31 days";
            break;
        case 8: 
            cout<<"August have 31 days";
            break;
        case 9: 
            cout<<"September have 30 days";
            break;
        case 10: 
            cout<<"October have 31 days";
            break;
        case 11: 
            cout<<"November have 30 days";
            break;
        case 12: 
            cout<<"December have 31 days";
            break;
        default: 
            cout<<"Invalid input! Please enter month number between 1-12";
    }
    return 0;
}
