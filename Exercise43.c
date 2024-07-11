#include<stdio.h>
// Declare an integer variable and initialize it to 3. Define a pointer that 
// points to the address of this variable. Prompt the user to enter a value 
// and assign it to this variable. Create a void function named addTen that 
// takes the pointer as a parameter. In the main function, print the value 
// of the variable after adding 10 to it.

void addTen(int *p);

int main(void){
	
	int num = 3;
	int *p;
	p = &num;
	
	printf("Enter a number: ");
	scanf("%d", &num);

	addTen(p);

	printf("Value after adding 10: %d\n", *p);

	system("pause");
	return 0;
}

void addTen(int *p){
	*p += 10;
}