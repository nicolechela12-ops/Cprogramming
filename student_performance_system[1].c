#include <stdio.h>

int calculateTotal (int mark1, int mark2, int mark3)
{
	return mark1 + mark2 + mark3;
}

float calculateAverage (int total)
{
	return total /3.0;
}

void displayResult (float average)

{
	if (average >=50)
	{
		printf("result passed\n");
	}
	else 
	{
		printf ("result failed\n");
	}
	
	int main() {

		int mark1,mark2,mark3;
		int total;
		float average;

		printf("enter marks for the three subjects\n");
		printf("subject1");
		scanf("%d", &mark1);
		printf("subject2");
		scanf("%d" , %mark2);
		printf("subject3");
		scanf("%d", &mark3);
		
		total = calculateTotal(mark1,mark2,mark3);
		average =calculateAverage(total);
		
		printf("total marks %d\n", total);
		printf("average marks %.2f", average);
		display result (average);
		
		return 0;
	}