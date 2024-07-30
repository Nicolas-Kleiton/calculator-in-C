#include <stdio.h>

int main() {

   float num1, num2;
   char operation;

   printf("Choose an operation (+,-,*,/): ");
   scanf("%c", &operation);
   printf("Enter the first number: ");
   scanf("%f", &num1);
   printf("Enter the second number: ");
   scanf("%f",&num2);
 
   switch (operation)
   {
    case '+': 
        printf("Result: %.2f\n", num1+num2);
        break;
    case '-': 
        printf("Result: %.2f\n", num1-num2);
        break;
    case '*': 
        printf("Result: %.2f\n", num1*num2);
        break;
    case '/':
        if (num2 == 0) {
            printf("Cannot divide by 0\n");
        } else {
            printf("Result: %.2f\n", num1/num2);
        }
        break;
   default: 
        printf("Invalid operation, try again.\n");
   }

	return 0;
}

