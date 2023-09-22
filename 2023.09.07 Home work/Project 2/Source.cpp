#include <iostream>
using namespace std;
main()
{
	int n, i, j, b, a, z = 0;
	cin >> n;
	if (n > 0 && n != 0)
	{
		for (i = 1; i <= n; i++)

			z += i;
	}
	else
	{
		for (i = 1; i >= n; i--)
			z += i;
	}
	cout << z;
}