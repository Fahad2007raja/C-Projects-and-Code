#include<iostream>

using namespace std;
int main()
{
    int x=5;
    int y;
    int z,a;
    a=1;
    do
   
    {
        y=1;
        do
       
        {
            cout<<" " "";
            y++;
        }
         while (y<=x);
        x--;

        z=1;
        do
       
        {
        cout<<"*";
        z++;  
        }
         while (z<=a);
        a++;
        
        cout<<endl;
       
    }
     while (x>=1 && a<=5);
    return 0;
}