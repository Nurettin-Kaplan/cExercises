#include<stdio.h>
// A C program that calculates the equivalent amount in Turkish Lira based
// on the entered Dollar exchange rate and Dollar amount from the keyboard.
int main(void){
	
	float dollarRate, dollar, tl;
	
	printf("Enter the Dollar exchange rate: ");
	scanf("%f", &dollarRate);
	
	printf("Enter the amount of Dollars you want to exchange: ");
	scanf("%f", &dollar);
	
	tl = dollarRate * dollar;
	
	printf("Equivalent in Turkish Lira: %.2f\n", tl);

	system("pause");
	return 0;
}