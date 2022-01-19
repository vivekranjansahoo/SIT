#include<stdio.h>
int main()
{
    int n, i, j, k = 1;

    printf("Enter the no of rows : ");
    scanf("%d", &n);

    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            if (k % 2 == 0)
                printf("1  ");
            else
                printf("0  ");
            k++;
        }

        printf("\n");
    }
    return 0;
}
