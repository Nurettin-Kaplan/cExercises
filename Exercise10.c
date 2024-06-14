#include<stdio.h>
// Write a C program that calculates the distance (m) traveled 
// by a vehicle based on the speed (m/s) and time (s) values entered from the keyboard.
int main(void){
	
	float v, t, x;
	
	printf("Enter the speed value (m/s):");
	scanf("%f", &v);
	
	printf("Enter the time value (t): ");
	scanf("%f", &t);
	
	x = v * t; 
	
	printf("The distance traveled is %.2f meters.\n", x);
	
	system("pause");
	return 0;
}