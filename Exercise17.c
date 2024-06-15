#include<stdio.h>
// Write a C program that converts an uppercase letter entered by the user to a lowercase letter.
int main(void){
	
	char upperCase;
	
	printf("Enter a character: ");
	scanf(" %c", &upperCase);
	
	printf("Lowercase value of the entered uppercase letter is: %c\n", upperCase + 32);
	
	system("pause");
	return 0;
}