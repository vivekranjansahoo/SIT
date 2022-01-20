#include<stdio.h>
int main()
{

    char line[1000];
    int i, v, c, ch, s, o;
    o = v = c = ch = s = 0;
    printf("\nEnter a Line of String: \n");

    gets(line);

    for (i = 0; line[i] != '\0'; ++i)
    {
        if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' || line[i] == 'o' || line[i] == 'u' || line[i] == 'A' || line[i] == 'E' || line[i] == 'I' || line[i] == 'O' || line[i] == 'U')
            ++v;
        else if ((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z'))
            ++c;
        else if (line[i] == ' ')
            ++s;
    }

    printf("\nTotal Number of Vowels Are: %d", v);
    printf("\nTotal Number of Consonants Are: %d", c);
    printf("\nTotal Number of Spaces Are: %d\n\n", s);
    return 0;
}
