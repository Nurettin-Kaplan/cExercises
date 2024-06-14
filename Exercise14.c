#include<stdio.h>
// Write a C program that divides one integer entered from
// the keyboard by another integer entered from the keyboard,
// and finds both the quotient and the remainder.
int main(void){
	
	int dividend, divisor, remainder, quotient;
	
	printf("Enter the dividend: ");
	scanf("%d", &dividend);
	
	printf("Enter the divisor:  ");
	scanf("%d", &divisor);
	
	quotient = dividend / divisor; 
	remainder = dividend % divisor;
	
	printf("Quotient: %d\n", quotient);
	printf("Remainder: %d\n", remainder);
	
	system("pause");
	return 0;
}