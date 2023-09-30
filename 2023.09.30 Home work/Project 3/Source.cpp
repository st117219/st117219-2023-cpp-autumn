#include <iostream>

int main(int argc, char* argv[])
{
    int x = 1;
    int k = 1;
    int m = 1;
    int n = 1;

    std::cin >> x;

    int i = 1;
    while (i <= x)
    {
        if (i * i >= x)
        {
            m = i;
            break;
        }
        i++;
    }

    i = 1;
    while (i <= m)
    {
        if (x % i == 0)
        {
            k += 2;
        }
        i++;
    }

    if (x % m == 0)
    {
        k--;
    }

    std::cout << k << std::endl;
    return EXIT_SUCCESS;
}