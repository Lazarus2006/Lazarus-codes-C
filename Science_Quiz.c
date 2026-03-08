#include <stdio.h>
#include <ctype.h>
#include <string.h>


char get_answer();

int main(){

    char questions[][300] =   {"1. What is the only metal that is liquid at standard room temperature?",
                                "2. Which part of the cell is known as the powerhouse and contains its own DNA?",
                                "3. What is the most abundant gas in the Earth's atmosphere?",
                                "4. Which planet in our solar system has the most moons?",
                                "5. What is the name of the phenomenon where the Earth's atmosphere traps heat?",
                                "6. What is the hardest substance in the human body?",
                                "7. Which famous scientist developed the Three Laws of Motion?",
                                "8. On the pH scale, is a value of 2 considered:",
                                "9. What is the process by which plants use sunlight to synthesize food?",
                                "10. What is the boiling point of water at sea level?"
                            };       

    char options[][100] =  {"A) Iron\nB) Mercury\nC) Gallium\nD) Silver",
                            "A) Nucleus\nB) Ribosome\nC) Mitochondria\nD) Golgi Apparatus",
                            "A) Oxygen\nB) Carbon Dioxide\nC) Hydrogen\nD) Nitrogen",
                            "A) Jupiter\nB) Saturn\nC) Neptune\nD) Mars",
                            "A) Global Cooling\nB) Greenhouse Effect\nC) Atmospheric Compression\nD) Solar Radiation",
                            "A) Bone\nB) Cartilage\nC) Tooth Enamel\nD) Skull",
                            "A) Albert Einstein\nB) Sir Isaac Newton\nC) Galileo Galilei\nD) Nikola Tesla",
                            "A) Strongly Acidic\nB) Neutral\nC) Strongly Basic\nD) Slightly Acidic",
                            "A) Respiration\nB) Transpiration\nC) Photosynthesis\nD) Osmosis",
                            "A) 0°C\nB) 50°C\nC) 100°C\nD) 212°C"};

    char answers[10] = {'B', 'C', 'D', 'B', 'B', 'C', 'B', 'A', 'C', 'C'};

    char guess = '\0';
    
    int score = 0;

    int number_questions = sizeof(questions) / sizeof(questions[0]);

    for (int i = 0 ; i < number_questions ; i++){
        guess = '0';
        printf("%s\n" , questions[i]);
        printf("%s" , options[i]);
        printf("\n\n");
        

        guess = get_answer();
        
        if (guess == answers[i]){
            printf("\033[1;32mCorrect answer!\n\n");
            score++;
        }
        else{
            printf("\033[1;31mWrong answer!\n\n");
        }
        printf("\033[0m");
    }

    printf("Your score is %d out of %d" , score , number_questions);
    return 0;
}


char get_answer() {
    char guess = '\0';
    char input[100];
    int valid_input = 0;
    
    while (!valid_input) {
        printf("Enter your answer (A / B / C / D) : ");
        
        fgets(input, sizeof(input), stdin);
        
        if (strlen(input) == 2 && input[1] == '\n') {
            guess = toupper(input[0]);
            if (guess == 'A' || guess == 'B' || guess == 'C' || guess == 'D') {
                valid_input = 1;
            } else {
                printf("\nPlease input A, B, C, or D only\n\n");
            }
        } else {
            printf("\nInvalid input! Please enter ONLY a single letter (A, B, C, or D)\n\n");
            
            if (input[strlen(input)-1] != '\n') {
                int c;
                while ((c = getchar()) != '\n' && c != EOF);
            }
        }
    }
    
    return guess;
}