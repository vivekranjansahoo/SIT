#include<stdio.h>
int main()
{
    int a, b, i, r, rev, revb;
    printf("The numbers   \n");
    for (i = 1; i < 10000; i++)
    {
        a = i;
        rev = 0;
        while (a > 0)
        {
            rev = rev * 10 + a % 10;
            a = a / 10;
        }
        b = i * i;
        revb = 0;
        while (b > 0)
        {
            revb = revb * 10 + b % 10;
            b = b / 10;
        }
        if (revb == rev * rev)
        {
            printf("%d ", i);
        }
    }
    return 0;
}
