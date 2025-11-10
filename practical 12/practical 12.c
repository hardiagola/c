#include<stdio.h>
int main()
{
    int i;
    for (i=1; i<=50;i++)
    {
        printf("Book ID: %d",i);
        if (i%5==0){
            printf("(Special Edition)\n");
            continue;
        }
        printf("\n");
    }
    printf("\nHardiAgola_25CE002");
    return 0;
}
