#include<stdio.h>
// "Write a C program that finds the ASCII value of a character input from the user."
int main(void){
	
	char char_;
	
	printf("Enter a character: ");
	scanf("%c", &char_);
	
	printf("ASCII value: %d\n", char_);

	system("pause");
	return 0;
}