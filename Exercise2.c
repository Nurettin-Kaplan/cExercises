#include<stdio.h>
// Write a program that prints whether a number entered by the user is 'Positive', 'Negative', or 'Zero'.
int main(void){
	
	int number;
	
	printf("Enter the number: ");
	scanf("%d", &number);
	
	if(number > 0){
		printf("Positive.\n");
	}
	else if (number < 0){
		printf("Negative.\n");
	}
	else{
		printf("Zero.\n");
	}
	
	system("pause");
	return 0;
}