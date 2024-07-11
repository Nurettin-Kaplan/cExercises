#include<stdio.h>
// Write a C program that prompts the user to enter the number of elements in an array, 
// defines an array with the entered number of elements, then sequentially prompts 
// the user for each element of the array without using square brackets, 
// calculates and prints the sum of the elements without using square brackets
int main(void){
	
	int i, *p, elementsNum, sum = 0;
	
	printf("Enter the number of elements: ");
	scanf("%d", &elementsNum);

	int array[elementsNum];
	
	p = array;
	
	for(i = 0; i < elementsNum; i++){
		printf("Enter the %d-th element: ", i + 1);
		scanf("%d", p);
		sum += *p;
		p++;
	}

	printf("The sum of the numbers: %d\n", sum);

	system("pause");
	return 0;
}