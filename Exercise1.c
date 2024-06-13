#include<stdio.h>
// Program that sums 5 numbers entered from the keyboard and prints the result on the screen.
int main(void){
	
	int i;
	float number, sum = 0;
	
	for(i = 0; i < 5; i++){
		printf("Enter the %d. number: ", i + 1);
		scanf("%f", &number);
		sum += number;
	}
	
	printf("Result: %.2f\n", sum);
	
	system("pause");
	return 0;
}