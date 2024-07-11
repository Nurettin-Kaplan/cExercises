#include<stdio.h>
// Write a code that takes two numbers from the user, finds the greater one
// using a function that returns a pointer to it, and prints the greater number and its address.

int* BiggestNumber(int*, int*);

int main(void){
	
	int num1, num2;
	int *biggest;
	
	printf("Enter the first number: ");
	scanf("%d", &num1);
	
	printf("Enter the second number: ");
	scanf("%d", &num2);

	biggest = BiggestNumber(&num1, &num2);

	printf("The biggest number: %d, address: %p\n", *biggest, biggest);

	system("pause");
	return 0;
}

int* BiggestNumber(int* a, int* b){
	if(*a > *b) return a;
	else return b;
}