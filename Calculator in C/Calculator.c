#include <stdio.h>

int main() {

   float num1, num2;
   char operation;

   printf("Choose an operation (+,-,*,/): ");
   scanf("%c", &operation);
   printf("\nEnter the first number: ");
   scanf("%f", &num1);
   printf("\nEnter the second number: ");
   scanf("%f",&num2);
 
   switch (operation)
   {
    case '+': 
        printf("\nResult: %.2f", num1+num2);
        break;
    case '-': 
        printf("\nResult: %.2f", num1-num2);
        break;
    case '*': 
        printf("\nResult: %.2f", num1*num2);
        break;
    case '/':
        if (num2 == 0) {
            printf("\nCannot divide by 0");
        } else {
            printf("\nResult: %.2f", num1/num2);
        }
        break;
   default: 
        printf("\nInvalid operation, try again.");
   }

	return 0;
}

