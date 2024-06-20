#include<stdio.h>
// "Write a C program that prompts the user to enter 
// the number of elements in an integer array, then prompts 
// the user to enter each element one by one. Finally, the 
// program should display the largest element, the smallest element,
// the sum, and the average of the array."
int main(void){
	
	int i, elementNumber, max = -9999, min = 9999, sum = 0;
	float avg;
	
	printf("Enter the number of elements in the array: ");
	scanf("%d", &elementNumber);
	
	int numbers[elementNumber];
	
	for(i = 0; i < elementNumber; i++){
		printf("Enter the %dth element: ");
		scanf("%d", &numbers[elementNumber]);
		
		sum += numbers[elementNumber];
		
		if(numbers[elementNumber] > max){
			max = numbers[elementNumber];
		}
		if(numbers[elementNumber] < min){
			min = numbers[elementNumber];
		}
		
	}
	
	avg = (float)sum / elementNumber;
	
	printf("The largest element of the array is %d.\n", max);
	printf("The smallest element of the array is %d.\n", min);
	printf("The sum of the array %d\n", sum);
	printf("The average of the array is %.2f\n", avg);
	
	system("pause");
	return 0;
}