#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float circleArea(int radius)
{
    if (radius > 0)
        return 3.14159 * radius * radius;
    return -1;
}

int isPerfectSquare(int num)
{
    return (sqrt(num) == (int)sqrt(num));
}

int wordNumber(char string[300])
{
}

int main()
{
    // main code here

    system("pause");
    return 0;
}
