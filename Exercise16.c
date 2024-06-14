#include<stdio.h>
// Write a C program that prompts the user to enter two letters from 
// the English alphabet and prints the number of letters between the 
// entered letters according to the English alphabet.
int main(void){
	
	int diff;
	char char1, char2;
	
	printf("Enter the first character: ");
	scanf("%c", &char1);
	
	fflush(stdin);		// added to prevent the assignment of 'Enter' to the char2 variable
	
	printf("Enter the second character: ");
	scanf("%c", &char2);
	
	diff = char2 - char1 - 1;
	
	printf("There are %d letters between the two characters.\n", diff);
	
	system("pause");
	return 0;
}