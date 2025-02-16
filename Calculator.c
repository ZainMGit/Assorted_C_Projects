#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int calculator(double term1, double term2, char operation) {
    int temp;
    switch (operation) {
        case '+':
            //temp = term1 + term2;
            printf("%lf", term1 + term2);
            break;
        case '-':
            printf("%lf", term1 - term2);
            break;
        case '*':
            printf("%lf", term1 * term2);
            break;
        case '/':
            printf("%lf", term1 / term2);
            break;
    }
    return 0;
    
}

int main() {
    double term1;
    double term2;
    char operation;

    
    printf("Enter the first number: ");
    scanf("%lf", &term1);
    printf("\nEnter the second number: ");
    scanf("%lf", &term2);

    printf("\nEnter the operation you would like to perform: ");
    scanf(" %c", &operation);

    while (operation != '+' && operation != '-' && operation != '*' && operation != '/') {
        printf("\nEnter the operation you would like to perform: ");
        scanf(" %c", &operation);
    }

    printf("\n%lf %c %lf  = ", term1, operation, term2);
    calculator(term1, term2, operation);

}
