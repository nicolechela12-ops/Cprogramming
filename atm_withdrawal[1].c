#include <stdio.h>

int main () {
	float balance = 1000,withdrawal;
	
	while (balance> 0)
	{
		printf("enter amount to withdraw");
		scanf("%f", &withdrawal);
		
		balance = balance - withdrawal;
		
		printf("balance after withdrawal%.2f\n", balance);
	}
	
	return 0 ;
}