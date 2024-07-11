#include<stdio.h>
// Write a C program that prints the elements of an array with 5 elements in order and then in reverse using a pointer
int main(void){
	
	int arr[5] = {1, 2, 3, 4, 5};
	int i ,*p;
	
	p = arr;
	
	printf("Printing array elements\n");
	for(i = 0; i < 5; i++){
		printf("%d\n", *p);
		p++;
	}
	
	printf("Printing array elements in reverse\n");
	for(i = 0; i < 5; i++){
		p--;
		printf("%d\n", *p);
	}
	
	system("pause");
	return 0;
}