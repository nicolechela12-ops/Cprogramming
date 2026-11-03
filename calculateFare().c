#include<stdio.h>

double calculateFare (double distance)
{
	return distance * 50;
}
int main() {
	double distance ,fare;
	printf("enter distance travelled");
	scanf("%lf",&distance);
	
	fare=calculateFare (distance);
	printf("total fare = ksh. %.2lf", fare);
	
	return 0;
}