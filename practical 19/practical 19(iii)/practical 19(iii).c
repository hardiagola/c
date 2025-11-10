#include <stdio.h>

int main()
{
    int i, j, k;
    int n = 5;


    for (i = n; i >= 1; i--)
    {
        for (j = n; j > i; j--)
            printf("  ");

        for (k = i; k >= 1; k--)
            printf("%d ", k);

        for (k = 2; k <= i; k++)
            printf("%d ", k);

        printf("\n");
    }

    for (i = 2; i <= n; i++)
    {
        for (j = n; j > i; j--)
            printf("  ");
        for (k = i; k >= 1; k--)
            printf("%d ", k);

        for (k = 2; k <= i; k++)
            printf("%d ", k);

        printf("\n");
    }
    printf("\nHardiAgola_25CE002\n");
    return 0;
}






