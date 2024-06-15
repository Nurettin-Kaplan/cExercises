#include<stdio.h>
// Write a code that prints the sum of the squares of even numbers 
// between the start and end values obtained from the user. 
// Use a function to calculate the square of the numbers.
int squareCalculate(int num){
	return num * num;
}

int main(void){
	
	int i, start, end, sum = 0;
	
	printf("Enter start value of loop: ");
	scanf("%d", &start);
	
	printf("Enter end value of loop: ");
	scanf("%d", &end);
	
	for(i = start; i < end; i++){
		if(i % 2 == 0){
			sum += squareCalculate(i);
		}
	}
	
	printf("The sum of the squares of the even numbers in between is: %d", sum);
	
	return 0;
}