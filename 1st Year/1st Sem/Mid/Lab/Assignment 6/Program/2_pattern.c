#include<stdio.h>
int main()
{
    int i, j, n, p;

    printf("Enter the no of rows : ");
    scanf("%d", &n);

    for (i = 1, p = 'A'; i <= n; i++, p++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("   ");
        }
        for (j = i; j <= n; j++)
        {
            printf("%c  ", (char)(p));
        }
        printf("\n");
    }
    {
        for (i = 2, p = 'D'; i <= n; i++, p--)
        {
            for (j = i; j <= n; j++)
            {
                printf("   ");
            }
            for (j = 1; j <= i; j++)
            {
                printf("%c  ", (char)(p));
            }
            printf("\n");
        }
    }
    return 0;
}
