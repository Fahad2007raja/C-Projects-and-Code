#include<iostream>
using namespace std;

int main() {
    int x = 5; // Number of pyramid levels

    while (x >= 1) {
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
        x--;
    }
    return 0;
}
 