#include<stdio.h>
// Write a C program that performs one of the four basic arithmetic operations (+, -, *, /) 
// between two numbers based on the operation parameter received from the user. The program 
// should display the operation and its result on the screen. If a character other than the 
// four basic arithmetic operations is entered, the program should display an error.
int main(void){
	
	float num1, num2, result;
	char operation;
	
	printf("Enter the 1-th number: ");
	scanf("%f", &num1);
	
	printf("Enter the 2-th number: ");
	scanf("%f", &num2);
	
	printf("Enter the operation you want to perform (+, -, *, /): ");
	scanf(" %c", &operation);
	
	switch(operation){
		case '+':
			result = num1 + num2;
			break;
		case '-':
			result = num1 - num2;
			break;
		case '*':
			result = num1 * num2;
			break;
		case '/':
			result = num1 / num2;
			break;
		default:
			printf("You entered an invalid operation.");
			break;
	}
	
	printf("Result: %.2f\n", result);
	
	system("pause");
	return 0;
}