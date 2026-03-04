#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int user_choice();
int computer_choice();
void printing_result(int computer , int user);


int main(){
    int computer = computer_choice();
    int user = user_choice();
    
    printf("\n");
    switch (computer)
    {
    case 1:
        printf("Computer chosed Rock\n");
        break;
    case 2:
        printf("Computer chosed Paper\n");
        break;
    case 3:
        printf("Computer chosed Scissor\n");
        break;
    default:
        break;}

    printing_result(computer , user);
    return 0;
}

int computer_choice(){
    srand(time(NULL));
    int random = (rand() % 3) +1;
    return random;
}

int user_choice(){
    char choice[30] = "";
    int result = 0;
    do{
        printf("1. Rock\n");
        printf("2. Paper\n");
        printf("3. Scissor\n");

        printf("Enter your choice: ");
        fgets(choice , sizeof(choice) , stdin);
        choice[strlen(choice) - 1] = '\0';
        
        if (strcmp(choice , "1") == 0 || strcmp(choice , "ROCK") == 0 || strcmp(choice , "rock") == 0|| strcmp(choice , "Rock") == 0){
            result = 1;}
        else if (strcmp(choice , "2") == 0 || strcmp(choice , "PAPER") == 0 || strcmp(choice , "paper") == 0|| strcmp(choice , "Paper") == 0){
            result = 2;}
        else if (strcmp(choice , "3") == 0 || strcmp(choice , "SCISSOR") == 0 || strcmp(choice , "scissor") == 0|| strcmp(choice , "Scissor") == 0){
            result = 3;}
        else{
            printf("\nPlease enter a valid choice\n");
            continue;
        }
    }while (result  == 0);
    
    return result;
}

void printing_result(int computer , int user){
    if (user == computer){
        printf("It's a Draw\n");}
    else if (user == 1){
        if (computer == 2){
            printf("You lose\n");}
        else if (computer == 3){
            printf("You won\n");}}
    else if (user == 2){
        if (computer == 1){
            printf("You won \n");}
        else if (computer == 3){
            printf("You lose\n");}}
    else if (user == 3){
        if (computer == 1){
            printf("You lose \n");}
        else if (computer == 2){
            printf("You won\n");}}
}

    