#include<iostream>

using namespace std;
int main()
{
    
   int x=5;
    int y;
    while (x>=1)
    {
        y=1;
        while (y<=x)
        {
            cout<<"*";
            y++;
        }
        cout<<endl;
        x--;
    }
     return 0;
}