#include <iostream>
using namespace std;
int main() {
    int x;
    cout<<"Enter your percentage: ";
    cin>>x;

    if(x >= 90 && x <= 100)
    {
        cout<<"You Scored  A+ grade";
    }
    else if(x >= 80 && x <= 89)
    {
        cout<<"You Scored A grade ";
    }
    else if(x >= 70 && x <= 79)
    {
        cout<<" You Scored B grade";
    }
    else if(x >= 60 && x <= 69)
    {
        cout<<"You Scored C grade";
    }
    else if(x >= 50 && x <= 59)
    {
        cout<<"You Scored D grade ";
    }
    else
    {
        cout<<"Fail!";
    }
    
    return 0;
}