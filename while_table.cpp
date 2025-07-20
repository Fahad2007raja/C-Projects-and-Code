#include<iostream>

using namespace std;
int main()
{
    int x,n;
    cout<<"Enter your number :"<<endl;
    cin>>n;
    x=1;
    while (x<=20)
    {
        cout<<n<<"*"<<x<<"="<<x*n<<endl;;
        x++;
    }
    return 0;
}