#include<stdio.h>
// Write a C program that divides one integer entered from
// the keyboard by another integer entered from the keyboard,
// and finds both the quotient and the remainder.
int main(void){
	
	int i;
	float angle, sum = 0, thirdAngle;
	
	for(i = 0; i < 2; i++){
		printf("Enter the %d-th angle of the triangle: ", i + 1);
		scanf("%f", &angle);
		sum += angle;
	}
	
	thirdAngle = 180 - sum;
	
	printf("Third angle value: %.2f\n", thirdAngle);
	
	system("pause");
	return 0;
}