#include "iostream"
using namespace std;
void han(int n, int s, int a, int d) {
	if (n == 1) { cout << n << ' ' << s << ' ' << d << '\n'; return; }
	han(n - 1, s, d, a); cout << n << ' ' << s << ' ' << d << '\n'; han(n - 1, a, s, d);
}
int main() { int n; cin >> n; han(n, 1, 2, 3); }
