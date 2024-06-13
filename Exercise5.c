#include<stdio.h>
// Write a program that checks if two numbers entered by the user are greater than each other or equal.
int main(void){
	
	int firstNumber, secondNumber;
	
	printf("Enter the first number: ");
	scanf("%d", &firstNumber);
	
	printf("Enter the second number: ");
	scanf("%d", &secondNumber);
	
	if(firstNumber > secondNumber){
		printf("%d > %d\n", firstNumber, secondNumber);
	}
	else if(firstNumber < secondNumber){
		printf("%d < %d\n", firstNumber, secondNumber);
	}
	else{
		printf("%d = %d\n", firstNumber, secondNumber);
	}
	
	system("pause");
	return 0;
}