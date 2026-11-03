# include <stdio.h>

double calculateElectricBill (int units)
{
	double bill ;
	
	if (units <= 100)
	{
		bill = units * 10;
	}
	else if (units <= 200)
	{
		bill= (100 * 10) + (units - 100) * 15;
	}
	else
	{
		bill = (100 * 10) + (100 * 15) + (units -200) * 20;
	}
	
	return bill;
}

int main()
{
	int units;
	printf("enter units consumed");
	scanf("%d", &units);
	
	printf("total electricity bill = ksh.%.2f");
	calculateElectricBill (units);
	
	return 0;
}