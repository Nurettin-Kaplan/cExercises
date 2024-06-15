#include<stdio.h>
// Write a Billing Tracking System application in C that prompts
// the user to enter the monthly bill amount for each month based 
// on the entered month number. Starting from the 2nd month, 
// compare the entered bill amount with the average bill amounts of 
// previous months and alert the user if it is lower or higher. 
// Finally, display the total bill amount, average bill amounts.
// Note: You can use only the while loop if necessary.
int main(void){
	
	int i, monthNum;
	float billAmount, totalBill = 0, avg;
	
	printf("Welcome to the Billing Tracking System...\n");
	printf("How many months of bills do you want to enter?");
	scanf("%d", &monthNum);
	
	for(i = 0; i < monthNum; i++){
		printf("Enter the bill amount for month %d: ", i + 1);
		scanf("%f", &billAmount);
		totalBill += billAmount;
		
		avg = totalBill / (i + 1);
		
		if(i != 0){
			if(billAmount > avg){
				printf("Entered bill amount for this month is higher than the average of previous months, please be careful :(\n");
			}
			else if(billAmount <= avg){
				printf("This month, your bill amount is equal to or lower than the average of previous months, which is great :)\n");
			}
		}
	}
	
	printf("For the entered %d months, the total bill amount is %.2f, with an average monthly bill of %.2f.\n", monthNum, totalBill, avg);
	
	system("pause");
	return 0;
}