#include<stdio.h>
// A shopping robot is desired that allows the customer to 
// request any desired amount of Bread, Milk, and Eggs with 
// the total amount of money entered by the customer. 
// The robot should indicate whether the remaining money 
// is sufficient for the purchase. Note: Only the do-while 
// loop can be used if necessary in the application.
int main(void){
	
	int productCode, piece;
	float totalMoney, bill;
	char *product;
	
	printf("Enter your total amount of money:");
	scanf("%f", &totalMoney);
	
	do{
		printf("What do you want to buy? Enter the product code.\n");
		printf("1-Bread (3 TL), 2-Milk (15 TL), 3-Egg (60 TL), 4-Exit: ");
		scanf("%d", &productCode);
		
		if(productCode == 1 || productCode == 2 || productCode == 3){
			printf("Enter piece: ");
			scanf("%d", &piece);
			
			switch(productCode){
			case 1:
				bill = 3 * piece;
				product = "bread";
				break;
			case 2:
				bill = 15 * piece;
				product = "milk";
				break;
			case 3:
				bill = 60 * piece;
				product = "egg";
				break;
			}
		
			if(totalMoney >= bill){
				totalMoney -= bill;
				printf("%d pieces of %s have been purchased. Your remaining money is %.2f\n", piece, product, totalMoney);
			}
			else{
				printf("You don't have enough money for this purchase. Your remaining money is %.2f\n", totalMoney);
			}
		}
		
		else if(productCode != 4){
			printf("You have entered an incorrect product code.\n");
		}
		
	}while(productCode != 4);
	
	printf("Your remaining money after shopping is %.2f. We hope to see you again :)\n", totalMoney);
	
	system("pause");
	return 0;
}