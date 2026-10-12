#include <math.h>

int main () {
	double length, width , diagonal;
	
	printf("enter the length of the window");
	scanf("%lf" ,&length);
	printf("enter the width of the window");
	scanf("%lf" ,&width);
	
	diagonal = sqrt (pow(length, 2) + pow(width, 2));
	
	printf("length =%.2lf\n" , length);
	printf("width =%.2lf\n" , width);
	printf("diagonal =%.2lf\n" ,diagonal);
	
	return 0;
}