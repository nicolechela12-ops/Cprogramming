#include <stdio.h>

int main () {
	int passward ;
	
	do {
		printf ("enter passward");
		scanf("%d" , &passward);
	}while (passward !=1234);
	
	printf("access granted\n");
	
	return 0;
}