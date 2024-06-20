#include<stdio.h>
// Write code in C that takes the base and exponent values from the user 
// and calculates the result. (Perform the exponentiation operation in 
// a function and use a while loop to calculate the result.)
int ExponentialCalculator(int base, int exp){
	int i = 1, result = 1;
	while(i <= exp){
		result *= base;
		i++; 
	}
	return result;
}

int main(void){
	
	int base, exp;
	
	printf("Enter the base: ");
	scanf("%d", &base);
	
	printf("Enter the exponent: ");
	scanf("%d", &exp);
	
	printf("Result: %d\n", ExponentialCalculator(base, exp));
		
	system("pause");
	return 0;
}