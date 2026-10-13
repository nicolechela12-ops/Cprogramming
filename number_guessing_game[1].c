#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
	int secretNumber , guess ;
	int attempt =0 ;
	srand(time(0));
	secretNumber = rand()%20 +1 ;
	
	do {
		printf("guess a number between 1 and 20");
		scanf("%d", &guess);
		
		attempt++;
		
		if (guess > secretNumber) 
		{
			printf("too high!\n");
		}
		else if (guess < secretNumber)
		{
			printf("too low!\n");
		}
		else {
			printf ("congratulations!\n");
			printf("total attempts %d\n", attempt);
		}
	}while (guess != secretNumber);
	
	return 0 ;
}
	