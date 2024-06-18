#include<stdio.h>
//A program is intended to be prepared that calculates 
// the price based on the entered rate. The program should 
// use a do while loop, and the calculation should be done 
// by a function named CalculatePrice according to the received values.

float PriceCalculator(float price, int operationType, float rate){
	switch(operationType){
		case 1:
			return price + ((price * rate) / 100);
			break;
		case 2:
			return price - ((price * rate) / 100);
			break;
	}
}

int main(void){
	
	int operation;
	float price, rate;
	char *operationName;
	
	printf("Welcome to price calculator program.\n");	
	printf("Enter the current price: ");
	scanf("%f", &price);
	
	do{
		printf("Enter to operation type (1 increase, 2 discount, 3 no change, 4 exit): ");
		scanf("%d", &operation);
		if(operation == 1){
			operationName = "increase";
		}
		else if(operation == 2){
			operationName = "discount";
		}
		else if(operation == 3){
			printf("There is no change, current price: %.2f\n", price);
			continue;
		}
		else if(operation == 4){
			return 1;
		}
		printf("Enter the rate percent as %s: ", operationName);
		scanf("%f", &rate);
		price = FiyatHesapla(price, operation, rate);
		printf("New price after operation: %.2f\n", price);
	}while(operation != 4);
	
	system("pause");
	return 0;
}