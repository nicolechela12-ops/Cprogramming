//program ti calculate qnd display the electricity consumption for 10 households

#include  <stdio.h>

int main () {
	int consumption [10];
	int i;
	
	//accept electricity consumption for 10 households
	for(i=0 ; i<10 ;i++ ) {
		printf ("Enter electricity unit consumed by housebold %d :", i+1);
		scanf("%d",&consumption[10]);
	}
	
	//display the household number and units consumed
	printf("Electreicity consumption:\n");
	for (i=0; i<10; i++) {
		printf("household %d : %d units\n", i+1 , consumption [10]);}
	
	return 0; 
}
