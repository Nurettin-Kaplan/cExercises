#include<stdio.h>
// Write a C program that prompts the user to enter a 
// positive integer, checks if the entered number is a 
// prime number, and prints the result on the screen.
int main(void){
	
	int i, num, isPrime = 1;
	
	printf("Enter a positive integer: ");
	scanf("%d", &num);
	
	if(num == 0 || num == 1){
		printf("It is not a prime number.\n");
		return 1;
	}

	for(i = 2; i < num; i++){
		if(num % i == 0){
			printf("It is not a prime number.\n");
			return 2;
		}
	}
	
	printf("It is a prime number.\n");

	system("pause");
	return 0;
}