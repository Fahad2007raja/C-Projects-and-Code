#include<iostream>

using namespace std;
int main()
{
    int x,y,f;
    cout<<"Enter your number :"<<endl;
    cin>>y;
    x=f=1;
   do
    {
        f=f*x;
        x++;
    }
    while (x<=y);
    cout<<"Factorial :"<<f<<endl;
    return 0;
}
