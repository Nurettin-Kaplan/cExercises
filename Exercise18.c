#include<stdio.h>
// A program that prints the squares of two numbers entered by the user and the division of their squares by each other.
int main(void){
	
	int firstNum, secondNum, squareOfFirst, squareOfSecond;
	float divisionOfSquare;
	
	printf("Enter the first number: ");
	scanf("%d", &firstNum);

	printf("Enter the second number: ");
	scanf("%d", &secondNum);

	squareOfFirst = firstNum * firstNum;
	squareOfSecond = secondNum * secondNum;
	
	divisionOfSquare = (float)squareOfFirst / squareOfSecond;
	
	printf("Square of first number: %d\n",squareOfFirst);
	printf("Square of second number: %d\n", squareOfSecond);
	printf("Division of squares: %.2f\n", divisionOfSquare);
	
	system("pause");
	return 0;
}