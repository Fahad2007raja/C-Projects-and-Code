#include<iostream>

using namespace std;
int main()
{
    int x;
    cout<<"Enter any number :"<<endl;
    cin>>x;
    if(10<x && x<100 && x%2==0)
    {
        cout<<"Valid Number "<<endl;
    }
    else{
        cout<<"Invalid Number "<<endl;
    }
    return 0;
}