#include <stdio.h>

int main(){
    
    char choice = 0;
    float C = 0.0f;
    float F = 0.0f;

    printf("Temperature Convertion program \n C for Celsius \n F for fahrenheit \n Enter your choice: ");
    scanf(" %c", &choice);

    if (choice == 'F' || choice == 'f'){
        printf("Enter the temperature in fahrenheit: ");
        scanf("%f" , &F);

        C = (F - 32) * 5 / 9;
        printf("%.1f in Fahrenheit will be equal to : %.1f Celsius" , F , C);
    }
    else if(choice == 'C' || choice == 'c'){
        printf("Enter the temperature in Celsius: ");
        scanf("%f" , &C);

        F = C * 9/5 +32;
        printf("%.1f in Celsius will be equal to : %.1f Fahrenheit" , C , F);
    }
    else{
        printf("invalid input , Please try again with a valid input :)");
    }
    return 0;
}