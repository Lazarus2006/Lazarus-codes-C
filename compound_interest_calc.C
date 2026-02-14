#include <stdio.h>
#include <math.h>

int main(){
    
    double principal = 0;
    double rate = 0;
    int years = 0;
    int times = 0;
    double total = 0;

    printf("Compound interest calculator program\n");
    
    printf("Enter the principal (P): ");
    scanf("%lf", &principal);

    printf("Enter the rate of interest: ");
    scanf("%lf" , &rate);

    printf("Enter the numbers of years: ");
    scanf("%d" , &years);

    printf("How many times does the interest get compounded in one year :");
    scanf("%d" , &times);

    rate = rate / 100;

    total = principal * pow(1 + (rate / times) , (years * times));

    printf("The total is: %.2lf" , total);

    return 0;
}