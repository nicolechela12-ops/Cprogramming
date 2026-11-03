#include <stdio.h>

int main () {
	float revenue [7], total =0, average;
	int i;
	
	for(i=0;i<7;i++)
	{
		printf("Enter revenue for day %d",i + 1);
		scanf("%f",&revenue[i]);
		
		total = total + revenue [i];
	}
	
	average=total/7;
	
	printf("Total weekly revenue = ksh %.2f\n",total);
	printf("Average daily revenue = ksh %.2f",average);
	
	return 0 ;
}