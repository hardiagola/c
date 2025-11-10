#include <stdio.h>

int main()
{
    int i, j;
    int n = 4;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
            printf("%c", 'A' + j - 1);
        for (j = i - 1; j >= 1; j--)
            printf("%c", 'A' + j - 1);
        printf("\n");
    }


    for (i = n - 1; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
            printf("%c", 'A' + j - 1);
        for (j = i - 1; j >= 1; j--)
            printf("%c", 'A' + j - 1);
        printf("\n");
    }
    printf("\nHardiAgola_25CE002\n");
    return 0;
}

