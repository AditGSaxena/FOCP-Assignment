#include <stdio.h>
#include <string.h>

int main() {
	int i;
    char word[] = "PROGRAM"; 
    int length = strlen(word);
    char guess;
    int chances = 3;
    int correctGuesses = 0;

    printf("Welcome to Hangman Game!\n");

    while (chances > 0 && correctGuesses < length){
        printf("\nGuess the word: ");
        
        for(i=0;i<length;i++){
            if(word[i]=='_'){
                printf("_ ");
            } else{
                printf("%c ", word[i]);
            }
        }

        printf("\nYou have %d chances left.\n", chances);
        printf("Enter your guess: ");
        scanf(" %c", &guess);

        int found=0;

        for(i=0;i<length;i++){
            if (word[i]==guess){
                word[i]='_';
                correctGuesses++;
                found=1;
            }
        }

        if(!found){
            chances--;
        }
    }

    if(correctGuesses==length){
        printf("\nCongratulations! You've guessed the word!\n");
    } else{
        printf("\nGame over! The word was: PROGRAM\n");
    }

    return 0;
}
