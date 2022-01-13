//  main.c
//  mathCalculations
//  Created by Hussein Saleh on 10/31/21.

#include <stdio.h>

// Function prototypes
void getInput(float *num, float *num2, char *ch);
float getCalculations(float *num1, float *num2, char *ch);

// Main
int main() {
    float num;
    float num2;
    char ch;
    float result;
    
    getInput(&num, &num2, &ch);
    result = getCalculations(&num, &num2, &ch);
    
    printf("%.2f%c%.2f = %.2f\n", num, ch, num2, result);
    return 0;
}

// Functions
void getInput(float *num, float *num2, char *ch){
    printf("Enter a number and an operator character followed by another number: ");
    scanf("%f", &(*num));
    scanf("%c", &(*ch));
    scanf("%f", &(*num2));
    while (*ch == '/'){
        while (*num2 == 0){
            printf("You cannot divide by 0. Enter a different number: ");
            scanf("%f", &(*num2));
        }
        break;
    }
}

float getCalculations(float *num1, float *num2, char *ch){
    float result = 0.0;
    
    switch(*ch){
        case '+':
        {
            result = (*num1) + (*num2);
            break;
        }
        case '-':
        {
            result = (*num1) - (*num2);
            break;
        }
        case '*':
        {
            result = (*num1) * (*num2);
            break;
        }
        case '/':
        {
            result = (*num1) / (*num2);
            break;
        }
    }
    
    return result;
}

