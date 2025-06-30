#include <iostream>
using namespace std;
int main() {
    int x = 2;
    int y = 4 ;
    int  a = 6;
     int b = 8;
    a=++x + y--;
    b=x++ + --y;
    cout<<++x<<endl;
    cout<<--y<<endl;
    cout<<a++<<endl;
    cout<<b--<<endl;
  

    return 0;
}