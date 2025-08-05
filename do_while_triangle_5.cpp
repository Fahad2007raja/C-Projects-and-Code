#include<iostream>
using namespace std;

int main() {
    int x = 5; // Number of pyramid levels
    do
    {
        // Print spaces
        int y = 6;
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
        x--;
    }
     while (x >= 1);
    return 0;
}
 