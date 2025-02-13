#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int game(char userInput, char computer) {
    if (userInput == computer) {
        printf("\nthe computer choose the same thing\n");
        printf("tie");
    }
    if (userInput == 'r' && computer == 'p') {
        printf("\nthe computer choose paper\n");
        printf("computer wins");
    }

    if (userInput == 'r' && computer == 's') {
        printf("\nthe computer chooses scissors\n");
        printf("user wins");
    }

    if (userInput == 'p' && computer == 'r') {
        printf("\nthe computer chooses rock \n");
        printf("user wins");

    }

    if (userInput == 'p' && computer == 's') {
        printf("\nthe computer chooses scissors\n");
        printf("computer wins");
    }

    if (userInput == 's' && computer == 'p') {
        printf("\nthe computer chooses paper\n");
        printf("user wins");

    }
    if (userInput == 's' && computer == 'r') {
        printf("\nthe computer chooses rock\n");
        printf("computer wins");
    }
}


int main() {
  
  char userInput; 
  char computer;
  printf("Enter Input ('r', 'p', or 's'): ");
  scanf("%c", &userInput);
  
  printf("%c",userInput);


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
  game(userInput, computer);
 





  return 0;
}

