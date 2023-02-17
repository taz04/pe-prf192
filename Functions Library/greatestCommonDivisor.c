#include <stdio.h>
#include <stdlib.h>

int GCD(int a, int b)
{
    while (a != 1 && b != 1)
    {
        if (a == b)
            return a;
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    return a;
}

int main()
{
    int n = 12, m = 24; // result: 12
    printf("GCD = %d\n", GCD(m, n));

    system("pause");
    return 0;
}
