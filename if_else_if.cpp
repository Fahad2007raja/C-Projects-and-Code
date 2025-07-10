#include <iostream>

using namespace std;

int main()
{
    int x, y, z;
    cout<<"Enter your three values: "<<endl;
    cin>>x>>y>>z;

    if(x>y && x>z){
        cout<<"Max ="<<x<<endl;
        if(y>z){
        cout<<"Min ="<<z<<endl;}
        else{
            cout<<"Min ="<<y<<endl;
        } 

    }
     else if (y>x && x>z)
        {
            cout<<"Max ="<<y<<endl;
            if(x>z)
            {
                cout<<"Min ="<<z<<endl;
            }
            else
            {
                cout<<"Min ="<<x<<endl;
            }
        }

    

    


    return 0;
}