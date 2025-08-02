#include<iostream>

using namespace std;
int main()
{
    int x=5;
    int y;
    int z,a;
    a=1;
    while (x>=1 && a<=5)
    {
        y=1;
        while (y<=x)
        {
            cout<<" " "";
            y++;
        }
        x--;

        z=1;
        while (z<=a)
        {
        cout<<"*";
        z++;  
        }
        a++;
        
        cout<<endl;
       
    }
    return 0;
}