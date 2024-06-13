#include<stdio.h>
// Write a program that prints whether a number entered by the user is 'Positive', 'Negative', or 'Zero'.
int main(void){
	
	int number;
	
	printf("Enter the number: ");
	scanf("%d", &number);
	
	if(number > 0){
		printf("Positive.");
	}
	else if (number < 0){
		printf("Negative.");
	}
	else{
		printf("Zero.");
	}
	
	return 0;
}