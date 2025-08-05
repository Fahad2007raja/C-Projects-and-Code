#include<iostream>

using namespace std;
int main()
{
    int x=1;
    int y;
    int z,a;
    a=5;
    do
    
    {
        y=1;
        do
        
        {
            cout<<" " "";
            y++;
        }
        while (y<=x);
        x++;

        z=1;
        do
        
        {
        cout<<"*";
        z++;  
        }
        while (z<=a);
        a--;
        
        cout<<endl;
       
    }
    while (x<=5 && a>=1);
    return 0;
}