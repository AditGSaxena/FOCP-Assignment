#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int user_choice, computer_choice;
    
    srand(time(0));

    printf("Enter your choice (0=Rock, 1=Paper, 2=Scissors): ");
    scanf("%d", &user_choice);

    if(user_choice<0||user_choice>2){
        printf("Invalid choice! Please enter 0, 1, or 2.\n");
        return 1;
    }

    computer_choice=rand()%3;  

    if(user_choice == 0) printf("You chose: Rock\n");
    else if(user_choice==1) printf("You chose: Paper\n");
    else printf("You chose: Scissors\n");

    if(computer_choice==0) printf("Computer chose: Rock\n");
    else if(computer_choice == 1) printf("Computer chose: Paper\n");
    else printf("Computer chose: Scissors\n");

    if(user_choice == computer_choice){
        printf("It's a tie!\n");
    }else if((user_choice == 0 && computer_choice == 2) ||
               (user_choice == 1 && computer_choice == 0) ||
               (user_choice == 2 && computer_choice == 1)) {  
        printf("You win!\n");
    } else {
        printf("Computer wins!\n");
    }

    return 0;
}

