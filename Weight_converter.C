#include <stdio.h>

int main(){

    int choice = 0;
    float kilograms = 0.0f;
    float pounds = 0.0f;


    printf("Weight converter calculator\n 1. Kilograms to Pounds \n 2. Pounds to kKilograms \n Enter your choice (1 or 2) : ");
    scanf("%d",&choice);

    if (choice == 1){
        printf("Enter the weight in Kilograms :");
        scanf("%f" , &kilograms);
        
        pounds = kilograms * 2.20462;
        printf("%.2f Kilograms in Pounds will be : %.2f Pounds" , kilograms , pounds);
    }
    else if (choice == 2){
        printf("Enter the weight in Pounds :");
        scanf("%f" , &pounds);
        
        kilograms = pounds / 2.20462;
        printf("%.2f Pounds in Kilograms will be : %.2f Kilograms" , pounds , kilograms);
    }
    else {
        printf("invalid input , please enter a valid choice!");
    }
    return 0;
}