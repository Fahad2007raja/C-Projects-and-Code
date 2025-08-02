#include<iostream>
using namespace std;

int main() {
    int x = 1; // Number of pyramid levels

    while (x <= 5) {
        // Print spaces
        int y = 6;
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
    int a = 6; // Number of pyramid levels

    while (a >= 1) {
        // Print spaces
        int b = 6;
        while (b > a) {
            cout << " ";
            b--;
        }
        // Print stars
        int c = 1;
        while (c <= (2 * a - 1)) {
            cout << "*";
            c++;
        }
        cout << endl;
        a--;
    }

    return 0;
}