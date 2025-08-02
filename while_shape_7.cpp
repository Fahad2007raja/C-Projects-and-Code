#include<iostream>
using namespace std;

int main() {
    int x = 1; // Number of pyramid levels

    while (x <= 5) {
        // Print spaces
        int y = 5;
        while (y > x) {
            cout << " ";
            y--;
        }
        // Print stars
        int z = 1;
        while (z <= (2 * x - 1)) {
            cout << "*";
            z++;
        }
        cout << endl;
        x++;
    }
   
    return 0;
}