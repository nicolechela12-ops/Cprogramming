#include <stdio.h>

double convertToCelsius (double fahrenheit)
{
	return (fahrenheit - 32) * 5/9;
}

int main(){
	double fahrenheit,celsius;
	
	printf("Enter temperature in fajrenheit");
	scanf("%lf", &fahrenheit);
	
	celsius =
	convertToCelsius (fahrenheit);
	
	printf ("Temperature in Celsius = %.2lf", celsius);
	return 0;
}