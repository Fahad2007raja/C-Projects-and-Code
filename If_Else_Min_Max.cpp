#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"Enter your numbers :"<<endl;
    cin>>num1>>num2;
    if (num1>num2)
    {
        cout<<"max="<<num1<<endl;
        cout<<"min="<<num2<<endl;
    }
    else
    {
        cout<<"max="<<num2<<endl;
        cout<<"min="<<num1<<endl;
    }
    return 0;
}