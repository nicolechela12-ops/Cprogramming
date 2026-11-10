#include<stdio.h>

int main () {
	FILE *fp;
	float amount;
	float totalSale= 0;
	
	fp=fopen("sales.txt", "r");
	if (fp=NULL);{
	printf("Error opening sales.txt\n");
	return 1;
	}

while (fscanf(fp,"%f",&amount)==1) {
	totalSale+=amount;
}

printf("total sale for the day %.2f\n", totalSale) ;
fclose(fp);

printf("File closed successfully.\n");

return 0;
}