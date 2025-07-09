#include <iostream>

using namespace std;

int main(){

    char ch;
    cout<<"Enter your choice not other than \n C for Cylinder \n and T for Trapezoid"<<endl;
    cin>>ch;

    if(ch == 'C'){
        float volume,r,h;
    cout<<"Enter the radius of cylinder:"<<endl;
    cin>>r;
    cout<<"Enter the height of cylinder:"<<endl;
    cin>>h;
    volume=3.14*r*r*h;
    cout<<"Volume of cylinder:"<<volume<<endl;

    }
    else{
        float parameter,area,a,b,c,d,h;
   cout<<"Enter values : "<<endl;
   cin>>a>>b>>c>>d>>h;
   
   parameter=a+b+c+d;
   cout<<"parameter:"<<parameter<<endl;
   area=h*a*0.5+h*b*0.5;
   cout<<"area"<<area<<endl;
    }
    return 0;
}