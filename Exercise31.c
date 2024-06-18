#include<stdio.h>
// During the period of Magnificent Friday discounts, users earn points 
// as a bank promotion on their credit cards based on specific rates for 
// their transactions. Write a C program that calculates the amount of points 
// that should be loaded onto the credit card according to the following rules. 
// Note: The limits are inclusive, point calculation and checking if points can 
// be earned should be done in separate functions, and the information about the 
// earned points should be printed on the screen within a separate method. At least 
// one purchase amount must be entered, and no option to exit the application should 
// be provided (it should continue indefinitely).

// Points can be earned from purchases of 100 TL or more:
//    20% for purchases between 100 TL and 199 TL
//    15% for purchases between 200 TL and 299 TL
//    10% for purchases between 300 TL and 399 TL
//    7.5% for purchases of 400 TL or more

float isEarnPoints(float amount){
	if (amount >= 100){
		if(amount <= 199){
			return (0.20);
		}
		else if(amount >= 200 && amount <= 299){
			return (0.15);
		}
		else if(amount >= 300 && amount <= 399){
			return (0.10);
		}
		else if(amount >= 400){
			return (0.075);
		}
	}
	else{
		return 0;
	}
}

float PointsCalculator(float amount, float rate){
	return amount * rate;
}

void PrintEarnPoints(float point){
	printf("This purchase earned %.2f points.\n", point);
}

int main(void){
	
	float amount, pointsRate, earnPoints;
	
	while(1){
		printf("Enter shopping amount: ");
		scanf("%f", &amount);
		pointsRate = isEarnPoints(amount);
		earnPoints = PointsCalculator(amount, pointsRate);
		PrintEarnPoints(earnPoints);
	}
	
	return 0;
}