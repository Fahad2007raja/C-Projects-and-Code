 #include <iostream>
using namespace std;
int main()
{
    float volume,r,h;
    cout<<"Enter the radius of cylinder:"<<endl;
    cin>>r;
    cout<<"Enter the height of cylinder:"<<endl;
    cin>>h;
    volume=3.14*r*r*h;
    cout<<"Volume of cylinder:"<<volume<<endl;
    return 0;
}