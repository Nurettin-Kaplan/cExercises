#include<stdio.h>
// Write a program that prints the largest of three numbers entered from the keyboard.
int main(void){
	
	int i, number, largestNumber;
	
	for(i = 0; i < 3; i++){
		printf("Enter the %d. number: ", i + 1);
		scanf("%d", &number);
		if (i == 0){
			largestNumber = number;
		}
		if(number > largestNumber){
			largestNumber = number;
		}
	}
	
	printf("The largest number is %d.\n", largestNumber);
	
	system("pause");
	return 0;
}