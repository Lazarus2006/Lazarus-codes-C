#include <stdio.h>

int main(){
    int x = 0;
    int y = 0;
    char s = '0';

    printf("enter the first number: ");
    scanf("%d", &x);

    printf("enter the sign (+ , - , * , /): ");
    scanf(" %c", &s);

    printf("enter the second number: ");
    scanf("%d", &y);
    
    

    if(s == '+'){
        printf("Result: %d\n", x + y);
    }
    else if (s == '-'){
        printf("Result: %d\n", x - y);
    }
    else if (s == '*'){
        printf("result: %d\n" , x * y);
    }
    else if (s == '/'){
        if (y == 0){
            printf("Please enter valid inputs\n");
        }
        else{
            printf("result: %d\n", x / y);
        }
    }
    else {
        printf("Invalid operator\n");
    }

    return 0;
}