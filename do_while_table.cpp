#include<iostream>

using namespace std;
int main()
{
    int x,n;
    cout<<"Enter your number :"<<endl;
    cin>>n;
    x=1;
    do
    
    {
        cout<<n<<"*"<<x<<"="<<x*n<<endl;;
        x++;
    }
    while (x<=20);
    return 0;
}