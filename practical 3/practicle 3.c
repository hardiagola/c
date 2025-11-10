#include<stdio.h>
int main()
{
    printf(" Body Mass Index - BMI\n");
    float weight,height;
    float BMI;
    printf("Enter your weight in kilograms:");
    scanf("%f",&weight);
    printf("\nEnter your height in meters:");
    scanf("%f",&height);
    BMI=weight/(height*height);
    printf(" Your BMI is: %.2f\n",BMI);
    printf("Thank you!");
    printf("\nHardiAgola_25CE002");
    return 0;
}
