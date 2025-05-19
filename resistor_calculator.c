#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Convert string to lowercase

// Color to digit (Band 1 & 2)
int colorValue(char *color) {
    if (strcmp(color, "black") == 0) return 0;
    if (strcmp(color, "brown") == 0) return 1;
    if (strcmp(color, "red") == 0) return 2;
    if (strcmp(color, "orange") == 0) return 3;
    if (strcmp(color, "yellow") == 0) return 4;
    if (strcmp(color, "green") == 0) return 5;
    if (strcmp(color, "blue") == 0) return 6;
    if (strcmp(color, "violet") == 0) return 7;
    if (strcmp(color, "gray") == 0) return 8;
    if (strcmp(color, "white") == 0) return 9;
    return -1;
}

// Color to multiplier (Band 3)
double multiplier(char *color) {
    if (strcmp(color, "black") == 0) return 1;
    if (strcmp(color, "brown") == 0) return 10;
    if (strcmp(color, "red") == 0) return 100;
    if (strcmp(color, "orange") == 0) return 1000;
    if (strcmp(color, "yellow") == 0) return 10000;
    if (strcmp(color, "green") == 0) return 100000;
    if (strcmp(color, "blue") == 0) return 1000000;
    if (strcmp(color, "violet") == 0) return 10000000;
    if (strcmp(color, "gray") == 0) return 100000000;
    if (strcmp(color, "white") == 0) return 1000000000;
    if (strcmp(color, "gold") == 0) return 0.1;
    if (strcmp(color, "silver") == 0) return 0.01;
    return -1;
}

// Color to tolerance (Band 4)
const char* Tolerance(char *color) {
    if (strcmp(color, "brown") == 0) return "±1%";
    if (strcmp(color, "red") == 0) return "±2%";
    if (strcmp(color, "green") == 0) return "±0.5%";
    if (strcmp(color, "blue") == 0) return "±0.25%";
    if (strcmp(color, "violet") == 0) return "±0.1%";
    if (strcmp(color, "gray") == 0) return "±0.05%";
    if (strcmp(color, "gold") == 0) return "±5%";
    if (strcmp(color, "silver") == 0) return "±10%";
    return "±20%";
}

int main() {
    char band1[10], band2[10], band3[10], band4[10];

    printf("Enter the color codes for your 4-band resistor:\n");
    printf("Band 1: ");
    scanf("%s", band1);
    printf("Band 2: ");
    scanf("%s", band2);
    printf("Band 3 (multiplier): ");
    scanf("%s", band3);
    printf("Band 4 (tolerance): ");
    scanf("%s", band4);

  

    int digit1 = colorValue(band1);
    int digit2 = colorValue(band2);
    double mult = multiplier(band3);
    const char *tol = Tolerance(band4);

    if (digit1 == -1 || digit2 == -1 || mult == -1) {
        printf("Invalid color input. Please try again.\n");
        return 1;
    }

    double resistance = (digit1 * 10 + digit2) * mult;

    printf("\nCalculated Resistance: ");
    if (resistance >= 1000000)
        printf("%.2f MΩ", resistance / 1000000);
    else if (resistance >= 1000)
        printf("%.2f kΩ", resistance / 1000);
    else
        printf("%.2f Ω", resistance);

    printf(" %s\n", tol);

    return 0;
}
