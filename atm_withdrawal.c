//program to allow a customer to make a withdrawal

#include <stdio.h>
int main () {
	float balance =50000 ;
	float withdrawal ;
	
	while(balance > 0) {
		printf("Enter withdrawal amount (0 to stop");
		scanf("%f",&withdrawal);
		
		if (withdrawal ==0) {
			printf("Transaction stopped\n");
		}
		
		if (withdrawal > balance)
		{
			printf("Insifficient funds (Transsaction stopped)\n");
		}
		
		balance =balance-withdrawal;
		printf ("withdrawal successful\n");
		printf (" remaining balance ksh %.2f\n",balance);
	}
		
		return 0;
	}