#include<stdio.h>
// Write a C program that prompts the user to enter an 
// integer and uses a recursive method to print the digits 
// of the entered number in words from left to right.

void PrintNumbers(int num){
	
	if(num != 0){
		PrintNumbers(num / 10);
		int digit = num % 10;
		switch(digit){
			case 0:
				printf("Zero "); break;
			case 1:
				printf("One "); break;
			case 2:
				printf("Two "); break;
			case 3:
				printf("Three "); break;
			case 4:
				printf("Four "); break;
			case 5:
				printf("Five "); break;
			case 6:
				printf("Six "); break;
			case 7:
				printf("Seven "); break;
			case 8:
				printf("Eight "); break;
			case 9:
				printf("Nine "); break;
		}
	}
}

int main(void){
	
	int num;
	
	printf("Enter an integer: ");
	scanf("%d", &num);
	
	PrintNumbers(num);
	
	printf("\n");
	system("pause");
	return 0;
}