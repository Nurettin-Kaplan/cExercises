#include<stdio.h>
// A program is required to check the body mass index (BMI) of
// all students in a class. The program should first ask the 
// user for the number of students in the class, then prompt the 
// user to enter the weight (in kg) and height (in meters) for each 
// student. Using a method for BMI calculation, write a C program that displays 
// the appropriate message on the screen according to the following ranges.
// BMI < 20 -> "Underweight"
// 20 <= BMI <= 25 -> "Normal"
// BMI > 25 -> "Overweight"

void BMICalculator(float weight, float height){
	float BMI;
	BMI = weight / (height * height);
	if(BMI < 20){
		printf("Underweight\n");
	}
	else if(BMI >= 20 && BMI <= 25){
		printf("Normal\n");
	}
	else if(BMI > 25){
		printf("Overweight\n");
	}
}

int main(void){
	
	int i, numStudents;
	float weight, height;
	
	printf("Enter the number of students: ");
	scanf("%d", &numStudents);
	
	for(i = 0; i < numStudents; i++){
		printf("Enter the weight(kg) of student %d: ", i + 1);
		scanf("%f", &weight);
		
		printf("Enter the height(m) of student %d: ", i + 1);
		scanf("%f", &height);
		
		BMICalculator(weight, height);
	}
	
	system("pause");
	return 0;
}