#include <stdio.h>

int main() {
    int i, j;


    printf("Pattern (i):\n");
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            if ((i + j) % 2 == 0)
                printf("1 ");
            else
                printf("0 ");
        }
        printf("\n");
    }
    printf("\nHardiAgola_25CE002\n");
    return 0;
}
