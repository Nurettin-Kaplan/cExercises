#include<stdio.h>
// A C program that calculates the weighted final grade of a student based 
//on the midterm and final exam scores entered from the keyboard, 
//where the midterm exam has a 40% weight and the final exam has a 60% weight.
int main(void){
	
	float midterm, final, weightedGrade;
	
	printf("Enter your midterm exam grade: ");
	scanf("%f", &midterm);
	
	printf("Enter your final exam grade: ");
	scanf("%f", &final);
	
	weightedGrade = ((0.4) * midterm) + ((0.6) * final);
	
	printf("Your weighted final grade: %.2f\n", weightedGrade);
	
	
	system("pause");
	return 0;
}