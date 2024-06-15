#include<stdio.h>
// Write a C program that prompts the user to enter midterm
//  and final exam grades, calculates the overall grade based
//  on 40% for the midterm grade and 60% for the final exam grade, 
// and prints the corresponding letter grade according to the following ranges.
// 100 >= average >= 90 AA
// 90 > average >= 85 BA
// 85 > average >= 80 BB
// 80 > average >= 75 CB
// 75 > average >= 70 CC
// 70 > average >= 65 DC
// 65 > average >= 60 DD
// 60 > average >= 0 FF
int main(void){
	
	float midterm, final, avg;
	char * letter;
	
	printf("Enter your midterm exam grade: ");
	scanf("%f", &midterm);
	
	printf("Enter your final exam grade: ");
	scanf("%f", &final);

	avg = ((0.4) * midterm) + ((0.6) * final); 
	
	if(avg <= 100 && avg >= 90){
		letter = "AA";
	}
	else if(avg < 90 && avg >= 85){
		letter = "BA";
	}
	else if(avg < 85 && avg >= 80){
		letter = "BB";
	}
	else if(avg < 80 && avg >= 75){
		letter = "CB";
	}
	else if(avg < 75 && avg >= 70){
		letter = "CC";
	}
	else if(avg < 70 && avg >= 65){
		letter = "DC";
	}
	else if(avg < 65 && avg >= 60){
		letter = "DD";
	}
	else if(avg < 60 && avg >= 0){
		letter = "FF";
	}

	printf("%.2f - %s\n", avg, letter);

	system("pause");
	return 0;
}