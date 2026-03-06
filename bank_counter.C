#include <stdio.h>

void check_balance(float balance);
float deposit(float balance);
float withdraw(float balance);

int main(){
    int choice = 0;
    float balance = 0;

    do{
    printf("--BANK COUNTER--\n");
    printf("1. Check balance\n");
    printf("2. Deposit\n");
    printf("3. Withdraw\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");

    if (scanf("%d" , &choice) != 1){
        printf("Invalid input ! Please enter a number.\n \n");
        while (getchar() != '\n');
        choice = 0;
        continue;
    }
    
    if (choice < 1 || choice > 4){
        printf("Please enter a number from 1 to 4 !\n \n");
        choice = 0;
    }
    
    if(choice == 1){
        check_balance(balance);
        
    }
    else if (choice == 2){
        balance = deposit(balance);
    }
    else if (choice == 3){
        balance = withdraw(balance);
    }
    
    }while(choice !=  4);


    return 0;
}

void check_balance(float balance){
    printf("\nyour balance is ₹%.2f\n ", balance);
}

float deposit(float balance){
    float deposit = 0;

    do{
        printf("Please enter the amount to deposit: ");
        if (scanf("%f" , &deposit) != 1){
            printf("Please Enter a valid amount\n");
            while (getchar() != '\n');
            continue;
        }
    }while(deposit <= 0);

    balance += deposit;
    printf("₹%.2f successfully deposited.\n Your new balance is ₹%.2f\n\n" , deposit , balance);
    return balance;
}

float withdraw(float balance){
    float amount = 0;
    do{
        printf("Enter the amount to withdraw: ");
        if (scanf("%f" , &amount) != 1){
            printf("Please enter a valid amount to withdraw\n");
            while (getchar() != '\n');
            continue;
        }
    }while (amount <= 0);

    if (amount > balance){
        printf("Insufficient balance!\n You only have ₹%.2f in your account.\n\n" , balance);
    }
    else{
        balance -= amount;
        printf("Successfully withdrawn ₹%.2f \n Your new balance is ₹%.2f\n\n" , amount , balance);
    }

    return balance;
}
    

