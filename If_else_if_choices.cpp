#include <iostream>
using namespace std;
int main()
{
    int x;
    cout<<"(1 for circle,2 for triangle, 3 for trapezoid,4 for parallelogram) :"<<endl;
    cin>>x;
    if( x==1 || x==2 || x==3 || x==4 )
    {
        if (x==1)
        {
             int area,r;
    cout<<"Enter radius :"<<endl;
    cin>>r;
    area= 2*3.1416*r;
    cout<<"Area of circle: "<<area<<endl;
        }
        else if (x==2)
        {
            float area,b,h;
    cout<<"Enter value of b :"<<endl;
    cin>>b;
    cout<<"Enter value of h :"<<endl;
    cin>>h;
    
    area=0.5*b*h;
    cout<<"Area: "<<area;
        }
        else if (x==3)
        {
             float parameter,area,a,b,c,d,h;
   cout<<"Enter value of a: "<<endl;
   cin>>a;
   cout<<"Enter value of b: "<<endl;
   cin>>b;
   cout<<"Enter value of c: "<<endl;
   cin>>c;
   cout<<"Enter value of d: "<<endl;
   cin>>d;
   cout<<"Enter value of h: "<<endl;
   cin>>h;
   parameter=a+b+c+d;
   cout<<"parameter:"<<parameter<<endl;
   area=h*a*0.5+h*b*0.5;
   cout<<"area"<<area<<endl;
        }
        else{
            float parameter,a,b,h,area;
cout<<"Enter value of a"<<endl;
cin>>a;
cout<<"Enter value of b"<<endl;
cin>>b;
cout<<"Enter value of h"<<endl;
cin>>h;
parameter=2*a+2*b;
cout<<"Parameter:"<<parameter<<endl;
area=b*h;
cout<<"Area: "<<area;
        }
    }
    else{
        cout<<"Invalid input :"<<endl;
    }
    return 0;
}