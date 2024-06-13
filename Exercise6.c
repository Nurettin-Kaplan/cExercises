#include<stdio.h>
// Write a program that prints the sum of even numbers between 1 and 11.
int main(void){
	
	int i, sum = 0;
	
	for(i = 0; i < 11; i++){	
		if (i % 2 == 0){
			sum += i;			// 0 + 2 + 4 + 6 + 8 + 10 = 30
		}
	}
	
	printf("Result: %d\n", sum);
	
	system("pause");
	return 0;
}