#include <stdio.h>

int main() {
    int seconds;

    printf("Enter the number of seconds to countdown: ");
    scanf("%d", &seconds);


    for (int i = seconds; i >= 0; i--) {
        printf("%d\n", i);
    }

    printf("Countdown completed!\n");
    printf("\nHardiAgola_25CCE002");

    return 0;
}

