#include <iostream>
using namespace std;
long long Square(long long a)
{
	long long b = a;
	b /= 10;
	b *= (b + 1);
	b *= 100;
	b += 25;
	return b;
}
int main()
{
	long long a;
	cin >> a;
	cout << Square(a);
	return 0;
}