#include<stdio.h>
int main()
{
    int num1, num2, num3, i, hcf;

    printf("Enter three number: ");
    scanf("%d%d%d", &num1, &num2, &num3);

    for (i = 1; i <= num1 && i <= num2 && i <= num3; i++)
    {
        if (num1 % i == 0 && num2 % i == 0 && num3 % i == 0)
            hcf = i;
    }

    printf("HCF is : %d", hcf);

    return 0;
}
