#include <stdio.h>
int main(void)
{
	double C, F;
	printf("Input a temperature (in Centigrade):");
	scanf("%lf", &C);
    F = (C*9/5) + 32;
	printf("%lf degrees Fahrenheit", F);
	return 0;
}