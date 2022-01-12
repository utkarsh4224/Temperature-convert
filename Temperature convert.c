#include <stdio.h>

int main()
{
    float celsius;
    printf("Enter temperature in celsius: ");//0
	scanf("%f", &celsius);
	printf("%f Celsius = %0.2f Fahrenheit\n", celsius,(9*celsius)/5 + 32.0);//(9*0)/5 + 32.0=32.0 
	printf("%f Celsius = %0.2f Kelvin",celsius,273.15 + celsius);//273.15+0=273.15
}


