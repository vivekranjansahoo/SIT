#include<stdio.h>
int main()
{
    int i, j, n;

    printf("Enter the no of lines\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i + 1; j++)
        {
            printf("   %d", j);
        }
        printf("\n");
    }
    for (i = n - 1; i >= 1; i--)
    {
        for (j = 1; j <= n - i + 1; j++)
        {
            printf("   %d", j);
        }
        printf("\n");
    }
    return 0;
}
