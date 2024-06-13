#include<stdio.h>
// Write a program that finds the absolute difference between two numbers entered by the user.
int main(void){
	
	int firstNum, secondNum, absoluteDiff;
	
	printf("Enter the first number: ");
	scanf("%d", &firstNum);
	
	printf("Enter the second number: ");
	scanf("%d", &secondNum);
	
	absoluteDiff = firstNum - secondNum;
	
	if (absoluteDiff < 0){
		absoluteDiff *= (-1);
	}
	
	printf("Absolute Difference : %d\n", absoluteDiff);
	
	system("pause");
	return 0;
}