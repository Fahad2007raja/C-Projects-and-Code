#include<iostream>
using namespace std;

int main() {
    int x = 1; // Number of pyramid levels
    do
   {
        // Print spaces
        int y = 7;
        do
        {
            cout << " ";
            y--;
        }
         while (y > x);
        // Print stars
        int z = 1;
        do
         {
            cout << "*";
            z++;
        }
        while (z <= (2 * x - 1));
        cout << endl;
        x++;
    }
     while (x <= 5) ;
    int a = 6; // Number of pyramid levels
    do
     {
        // Print spaces
        int b = 7;
        do
        {
            cout << " ";
            b--;
        }
         while (b > a);
        // Print stars
        int c = 1;
        do
        {
            cout << "*";
            c++;
        }
         while (c <= (2 * a - 1));
        cout << endl;
        a--;
    }
    while (a >= 1);
    return 0;
}