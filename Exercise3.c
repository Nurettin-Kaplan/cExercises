#include<stdio.h>
// Write a program that calculates the factorial of a number entered from the keyboard and prints the result on the screen.
int main(void){
	
	int i, number, result = 1;
	
	printf("Enter the number: ");
	scanf("%d", &number);
	
	for(i = 2; i <= number; i++){
		result *= i;
	}
	
	if(number == 0 || number == 1){
		result = 1;
	}

	printf("Result: %d\n", result);
	
	system("pause");
	return 0;
}