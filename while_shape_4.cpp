#include<iostream>

using namespace std;
int main()
{
    int x=1;
    int y;
    int z,a;
    a=5;
    while (x<=5 && a>=1)
    {
        y=1;
        while (y<=x)
        {
            cout<<" " "";
            y++;
        }
        x++;

        z=1;
        while (z<=a)
        {
        cout<<"*";
        z++;  
        }
        a--;
        
        cout<<endl;
       
    }
    return 0;
}