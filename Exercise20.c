#include<stdio.h>
// Write a C program that determines the mandatory military 
// service obligation based on age and gender information obtained from the user.
int main(void){
	
	int age;
	char gender;
	
	printf("Enter your age: ");
	scanf("%d", &age);
	
	printf("Enter your gender (M - F): ");
	scanf(" %c", &gender);
	
	if(age >= 20 && (gender == 'M' || gender == 'm')){
		printf("You must go to the military.\n");
	}
	else{
		printf("You don't need to go to the military.\n");
	}
	
	system("pause");
	return 0;
}