#include<stdio.h>
// Write a C code that takes the starting and ending values 
// of a loop from the user, then for numbers between these 
// two values, prints 'a' next to numbers divisible by 2, 
// 'b' next to numbers divisible by 3, and 'ab' next to 
// numbers divisible by both 2 and 3. If a number is 
// divisible by 5, the program continues to the next 
// iteration without printing anything.
int main(void){
	
	int i, start, end;
	
	printf("Enter starting value: ");
	scanf("%d", &start);
	
	printf("Enter ending value: ");
	scanf("%d", &end);
	
	for(i = start; i <= end; i++){
		if(i % 5 == 0){
			continue;
		}
		else if(i % 2 == 0 && i % 3 == 0){
			printf("%d - ab\n", i);
		}
		else if(i % 2 == 0){
			printf("%d - a\n", i);
		}
		else if(i % 3 == 0){
			printf("%d - b\n", i);
		}
	}
	
	system("pause");
	return 0;
}