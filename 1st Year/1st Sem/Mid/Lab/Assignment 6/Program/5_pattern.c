#include<stdio.h>
int main()
{

    int i, j, n, s, p;

    printf("Enter the no of rows : ");
    scanf("%d", &n);

    for (i = n, p = 1; i >= 1; i--, p++)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (s = 1; s <= i; s++)
        {
            printf("%d ", p);
        }

        printf("\n");
    }
    return 0;
}

