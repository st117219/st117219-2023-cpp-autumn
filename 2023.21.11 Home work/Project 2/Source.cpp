#include <iostream>

using namespace std;

void move(int n, int x, int y)
{
    int t = 6 - x - y;
    if (n > 0) {
        if (x + y == 4) {
            move(n, x, 2);
            move(n, 2, y);
        }
        else {
            move(n - 1, x, t);
            cout << n << " " << x << " " << y << " " << endl;
            move(n - 1, t, y);
        }
    }
}

int main()
{
    int n;
    cin >> n;
    move(n, 1, 3);
}