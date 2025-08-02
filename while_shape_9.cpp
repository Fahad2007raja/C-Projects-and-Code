 #include <iostream>

using namespace std;
int main() {
 int a = 1;
    while (a <= 5) {
        int b = 1;
        while (b <= a) {
            cout << "*";
            b++;
        }
        int c = 1;
        while (c <= 2 * (5 - a)) {
            cout << " ";
            c++;
        }
        int d = 1;
        while (d <= a) {
            cout << "*";
            d++;
        }
        cout << endl;
        a++;
    }
   int  x = 4;
    while (x >= 1) {
        int y = 1;
        while (y <= x) {
            cout << "*";
            y++;
        }
        int z = 1;
        while (z <= 2 * (5 - x)) {
            cout << " ";
            z++;
        }
        int l = 1;
        while (l <= x) {
            cout << "*";
            l++;
        }
        cout << endl;
        x--;
    }

    return 0;
}