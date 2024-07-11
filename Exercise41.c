#include<stdio.h>
// Write a C program that uses a pointer to search for a user-input value
//  in a defined array of 10 elements. If the value is found in the array, 
// print its index; otherwise, print 'not found'.
int main(void){
	
	int arr[] = {3, 5, 7, -9, 1, -2, 4, 0, 6, -8};
	int i, valueForSearch, *p, isFind = 0;
	
	p = arr;
	
	printf("Enter the value to search for: ");
	scanf("%d", &valueForSearch);
	
	int size = sizeof(arr) / sizeof(int);
	
	for(i = 0; i < size; i++){
		if(valueForSearch == *p){
			printf("The index of the searched value is %d.\n", i);
			isFind = 1;
			break;
		}
		p++;
	}
	
	if(isFind == 0){
		printf("The searched value is not found.\n");
	}

	system("pause");
	return 0;
}