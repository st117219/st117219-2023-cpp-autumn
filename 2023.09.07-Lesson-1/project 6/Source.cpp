#include <cstdio>
using namespace std;

int main()
{
    int a, b;

    scanf("%d%d", &a, &b);
    printf("max: %d\n", (a / b * a + b / a * b) / (a / b + b / a));

    return 0;
}