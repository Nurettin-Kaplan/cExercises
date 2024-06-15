#include<stdio.h>
// Write a code in C that prints the square of the numbers
// entered by the user and continues to do so until the user 
// enters zero. Use a function to print the square of the numbers.

int squareCalculate(int num){
	return num * num;
}

int main(void){
	
	int num;
	
	do{
		printf("Enter a number(Enter 0 to exit): ");
		scanf("%d", &num);
		
		if(num != 0){
			printf("The square of the number you entered is: %d\n", squareCalculate(num));
		}
	}while(num != 0);
	
	printf("Program terminated.\n");
	
	return 0;
}