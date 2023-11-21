#include <iostream>
using namespace std;

void hanoi(int n, int f, int t) {
    if (n == 0) {
        return;
    }
    int v = 6 - f - t;
    if (f == t - 1 || (f == 3 && t == 1)) {
        hanoi(n - 1, f, v);
        cout << n << " " << f << " " << t << endl;
        hanoi(n - 1, v, t);
    }
    else {
        hanoi(n - 1, f, t);
        cout << n << " " << f << " " << v << endl;
        hanoi(n - 1, t, f);
        cout << n << " " << v << " " << t << endl;
        hanoi(n - 1, f, t);
    }
}

int main() {
    int n;
    cin >> n;
    hanoi(n, 1, 3);
    return 0;

}