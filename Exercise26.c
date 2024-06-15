#include<stdio.h>
// Write a C program that first prompts the user to enter the 
// number of students in the class, then asks the user to enter 
// the grades of each student one by one. Finally, the program 
// should display the average grade, the highest grade, and the 
// lowest grade on the screen. (If a loop structure is necessary, 
// only the while loop can be used.)
int main(void){
	
	int i, studentsNum;
	float grade, gradeSum = 0, avg, min = 100, max = 0;
	
	printf("Enter the number of students in the class: ");
	scanf("%d", &studentsNum);
	
	for(i = 0; i < studentsNum; i++){
		printf("Enter the grade of students %d-th: ", i + 1);
		scanf("%f", &grade);
		
		if(grade < min){
			min = grade;
		}
		if(grade > max){
			max = grade;
		}
		gradeSum += grade;
	}
	avg = gradeSum / studentsNum;
	
	printf("Highest grade received by students: %.2f\n", max);
	printf("Lowest grade received by students: %.2f\n", min);
	printf("Average grade received by students: %.2f\n", avg);
	
	system("pause");
	return 0;
}