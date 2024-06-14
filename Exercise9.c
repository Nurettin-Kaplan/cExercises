#include<stdio.h>
// A C program that calculates the average of two integers entered from the keyboard and prints the result on the screen.
int main(void){
	
	int i, num, sum = 0;
	float avg;
	
	for(i = 0; i < 2; i++){
		printf("Enter the %d. number: ", i + 1);
		scanf("%d", &num);
		sum += num;
	}

	avg = (float)sum / 2;
	
	printf("Average is %.2f\n", avg);
	
	system("pause");
	return 0;
}