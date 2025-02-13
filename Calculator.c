#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int calculator(int term1, int term2, char operation) {
    int temp;
    switch (operation) {
        case '+':
            //temp = term1 + term2;
            printf("%d", term1 + term2);
            break;
        case '-':
            printf("%d", term1 - term2);
            break;
        case '*':
            printf("%d", term1 * term2);
            break;
        case '/':
            printf("%d", term1 / term2);
            break;
    }
    return 0;
    
}

int main() {
    int term1;
    int term2;
    char operation;

    
    printf("Enter the first number: ");
    scanf("%d", &term1);
    printf("\nEnter the second number: ");
    scanf("%d", &term2);

    printf("\nEnter the operation you would like to perform: ");
    scanf(" %c", &operation);

    while (operation != '+' && operation != '-' && operation != '*' && operation != '/') {
        printf("\nEnter the operation you would like to perform: ");
        scanf(" %c", &operation);
    }

    printf("\n%d %c %d  = ", term1, operation, term2);
    calculator(term1, term2, operation);
    


}
