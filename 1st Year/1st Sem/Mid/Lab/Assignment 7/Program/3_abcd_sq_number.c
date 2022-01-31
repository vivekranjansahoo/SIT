#include<stdio.h>
int main()
{
    int a, b, c, d, i;
    printf("the numbers : \n");
    for (a = 1000; a <= 9999; a++)
    {
        b = a / 100;
        c = a % 100;
        for (i = 1; i <= (c / 2 + 1); i++)
        {
            if ((float)c / i == i)
            {
                d++;
                if (d != 0)
                {
                    for (i = 1; i <= (b / 2 + 1); i++)
                    {
                        if ((float)b / i == i)
                        {
                            printf("%d  ", a);
                            break;
                        }
                    }
                }
                break;
            }
        }
    }
    return 0;
}
