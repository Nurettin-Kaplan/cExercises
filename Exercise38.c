#include<stdio.h>
// Write a code in C language that takes five names from the user, 
// stores them in an array, and then prints each name with 'hello' 
// appended at the beginning. Use a function to achieve this.

void sayHello(char[]);

int main(void){
	
	int i;
	char names[5][20];
	
	for(i = 0; i < 5; i++){
		printf("Enter the %d-th name: ", i + 1);
		scanf("%s", &names[i]);
	}
	
	for(i = 0; i < 5; i++){
		sayHello(names[i]);
	}
	
	system("pause");
	return 0;
}

void sayHello(char name[]){
	printf("Hello %s\n", name);
}