#include<stdio.h>
// Discounts are applied in a store based on customer type 
// and invoice amount as shown in the table below. Write a 
// C program that prompts the user to first enter the customer type, 
// then asks for the number of items purchased by the customer 
// and their individual prices. Finally, the program should display 
// the total invoice amount, the discount amount, and the amount the 
// customer needs to pay. (If a loop structure is necessary, only the 
// while loop can be used)
//
// CUSTOMER TYPE 		BILL < 1000			1000 <= BILL
//		A					%15					 %20
//		B					%10 				 %15
//		C					%5					 %10
int main(void){
	
	int i, piece;
	float price, bill = 0, sale, newBill;
	char customerType;
	
	printf("Enter the your customer type (A, B, C): ");
	scanf("%c", &customerType);
	
	if(customerType == 'A' || customerType == 'B' ||customerType == 'C'){
		
		printf("Enter the piece buy of products: ");
		scanf("%d", &piece);
	
		i = 0;
		while(i < piece){
			printf("Enter the price buy of product %d-th: ", i + 1);
			scanf("%f", &price);
			bill += price;
			i++;
		}
		
		if(bill < 1000){
			switch(customerType){
			case 'A':
				sale = (0.15);
				break;
			case 'B':
				sale = (0.10);
				break;
			case 'C':
				sale = (0.05);
				break;
			}
		}
		else if(bill >= 1000){
			switch(customerType){
			case 'A':
				sale = (0.20);
				break;
			case 'B':
				sale = (0.15);
				break;
			case 'C':
				sale = (0.10);
				break;
			}
		}
	}
	else{
		printf("You entered an invalid customer type.\n");
		return 1;
	}
	
	newBill = bill - (bill * sale);
	
	printf("Total price: %.2f\n", bill);
	printf("Sale: %.2f\n", (bill * sale));
	printf("Discounted invoice: %.2f\n", newBill);
	
	system("pause");
	return 0;
}