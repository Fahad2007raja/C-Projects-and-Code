#include <iostream> 
using namespace std;
int main() {
    float celsius,fahrenheit;
    cout<<"Enter temperature in Fahrenheit"<<endl;
    cin>>fahrenheit;
    celsius = 9/5*(fahrenheit-32);
    cout<<"Temperature in Celsius: "<<celsius<<endl;
    
    return 0;
}