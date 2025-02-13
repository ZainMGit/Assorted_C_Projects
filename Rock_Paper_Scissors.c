#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int game(char userInput, char computer) {
    if (userInput == computer) {
        printf("\nthe computer choose the same thing\n");
        printf("Go Again\n");
        return 0;
    }
    if (userInput == 'r' && computer == 'p') {
        printf("\nthe computer choose paper\n");
        printf("computer wins");
        return 1;
    }

    if (userInput == 'r' && computer == 's') {
        printf("\nthe computer chooses scissors\n");
        printf("user wins");
        return 1;
    }

    if (userInput == 'p' && computer == 'r') {
        printf("\nthe computer chooses rock \n");
        printf("user wins");
        return 1;

    }

    if (userInput == 'p' && computer == 's') {
        printf("\nthe computer chooses scissors\n");
        printf("computer wins");
        return 1;
    }

    if (userInput == 's' && computer == 'p') {
        printf("\nthe computer chooses paper\n");
        printf("user wins");
        return 1;

    }
    if (userInput == 's' && computer == 'r') {
        printf("\nthe computer chooses rock\n");
        printf("computer wins");
        return 1;
    }
}


int main() {
  
  char userInput; 
  char computer;

  int i = 0;

  while (i == 0) {
    printf("Enter Input ('r', 'p', or 's'): ");
    scanf(" %c", &userInput);

    while (userInput != 'r' && userInput != 'p' && userInput != 's') {
      printf("Invalid Input\n");
      printf("Enter Input ('r', 'p', or 's'): ");
      scanf(" %c", &userInput);
    }


    srand(time(NULL));
    int random = rand();
  
    random = random % 3;
    if (random == 0) {
      computer = 'r';
    }
    if (random == 1) {
      computer = 'p';
    }
    if (random == 2){
      computer = 's';
    }


    i = game(userInput, computer);
  }

  return 0;
}

