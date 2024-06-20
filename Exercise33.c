#include<stdio.h>
// Write code in C that prints the numbers between the number 
// entered by the user and zero, and their sum. (Use a recursive 
// function for both printing the numbers and calculating their sum.) 

void PrintNumber(int num){
	printf("Number: %d\n", num);
	if(num > 1){
		PrintNumber(num - 1);
	}
}

int Sum(int num){									
	if(num > 0){				
		return (num + Sum(num - 1));
	}
	else{
		return 0;
	}
}

int main(void){
	
	int num, sum = 0;
	
	printf("Enter the number: ");
	scanf("%d", &num);
		
	PrintNumber(num);

	sum = Sum(num);
	printf("Sum: %d\n", sum);
		
	system("pause");
	return 0;
}