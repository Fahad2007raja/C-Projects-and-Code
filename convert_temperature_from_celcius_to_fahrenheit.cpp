#include <iostream> 
using namespace std;
int main() {
    float celsius,fahrenheit;
    cout<<"Enter temperature in Celcius"<<endl;
    cin>>celsius;
    fahrenheit = 5/9*(celsius+32);
    cout<<"Temperature in Fahrenheit: "<<fahrenheit<<endl;
    
    return 0;
}