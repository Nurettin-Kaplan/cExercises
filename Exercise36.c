#include<stdio.h>
// Write a C program that stores a specified number of n integers
// entered by the user in an array. Then, find how many elements in 
// the array are divisible by a number specified by the user.
int main(void){
	
	int i, pieces, num, divisor;
	
	printf("How many numbers do you want to enter?");
	scanf("%d", &pieces);
	
	int numbers[pieces];
	
	for(i = 0; i < pieces; i++){
		printf("Enter the %dth number:", i + 1);
		scanf("%d", &numbers[i]);
	}

	printf("Enter the divisor: ");
	scanf("%d", &divisor);
	
	for(i = 0; i < pieces; i++){
		if(numbers[i] % divisor == 0){
			printf("The %dth entered number, which is %d, is divisible by %d.\n",i + 1,numbers[i], divisor);
		}
	}
	
	system("pause");
	return 0;
}