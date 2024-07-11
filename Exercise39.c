#include<stdio.h>
// Write a C program that swaps the values of two integer 
// variables without using a third variable.
int main(void){
	
	int a = 10, b = 20, *p1 = &a, *p2 = &b;
	
	printf("Before swapping: a=%d b=%d\n", a, b);
	
	*p1 = *p1 + *p2; 	// a = 30 
	*p2 = *p1 - *p2;	// b = 10
	*p1 = *p1 - *p2; 	// a = 20

	printf("After swapping: a=%d b=%d\n", a, b);
	
	system("pause");
	return 0;
}