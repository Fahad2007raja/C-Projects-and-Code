 #include <iostream>

using namespace std;
int main() {
 int a =1;
 do
     {
        int b = 1;
        do
        {
            cout << "*";
            b++;
        }
         while (b <= a);
        int c = 1;
        if (c <= 2 * (5 - a))
        {
        do
        {
            cout << " ";
            c++;
        }
         while (c <= 2 * (5 - a));
    }
        int d = 1;
        do
         {
            cout << "*";
            d++;
        }
        while (d <= a);
        cout << endl;
        a++;
    }
        while (a <= 5);
   int  x = 4;
   do
     {
        int y = 1;
        do
         {
            cout << "*";
            y++;
        }
        while (y <= x);
        int z = 1;
        do
         {
            cout << " ";
            z++;
        }
        while (z <= 2 * (5 - x));
        int l = 1;
        do
         {
            cout << "*";
            l++;
        }
        while (l <= x);
        cout << endl;
        x--;
    }
    while (x >= 1);
    return 0;
}